#include "linux/cpu/ic/cpu_ic_processor_name.hpp"


std::string linux::ic::cpu_ic_processor_name::collect() const {
    std::ifstream cpuinfo("/proc/cpuinfo");
    if (!cpuinfo.is_open()) {
        return "Unknown CPU";
    }

    std::string line;
    std::string model_name;
    std::string hardware;
    std::string processor;

    while (std::getline(cpuinfo, line)) {
        // Ищем строку с model name (для x86/AMD)
        if (line.find("model name") != std::string::npos) {
            size_t colon_pos = line.find(':');
            if (colon_pos != std::string::npos) {
                model_name = line.substr(colon_pos + 2);
                model_name.erase(0, model_name.find_first_not_of(" \t"));
                model_name.erase(model_name.find_last_not_of(" \t") + 1);
            }
        }
        // Для некоторых ARM архитектур
        else if (line.find("Hardware") != std::string::npos) {
            size_t colon_pos = line.find(':');
            if (colon_pos != std::string::npos) {
                hardware = line.substr(colon_pos + 2);
                hardware.erase(0, hardware.find_first_not_of(" \t"));
                hardware.erase(hardware.find_last_not_of(" \t") + 1);
            }
        }
        // Для ARM процессоров
        else if (line.find("Processor") != std::string::npos) {
            size_t colon_pos = line.find(':');
            if (colon_pos != std::string::npos) {
                processor = line.substr(colon_pos + 2);
                processor.erase(0, processor.find_first_not_of(" \t"));
                processor.erase(processor.find_last_not_of(" \t") + 1);
            }
        }
    }

    // Приоритет: model name -> Hardware -> Processor
    if (!model_name.empty()) {
        return model_name;
    } else if (!hardware.empty()) {
        return hardware;
    } else if (!processor.empty()) {
        return processor;
    }

    return "Unknown CPU";
}
