#include "linux/cpu/ic/cpu_ic_number_of_cores.hpp"


std::size_t linux::ic::cpu_ic_number_of_cores::collect() const {
    // Получаем количество доступных ядер
    long cores = sysconf(_SC_NPROCESSORS_ONLN);
    if (cores == -1) {
        return -1;
    }
    return static_cast<int>(cores);
}
