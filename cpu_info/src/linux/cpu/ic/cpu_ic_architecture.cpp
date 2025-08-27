#include "linux/cpu/ic/cpu_ic_architecture.hpp"


std::string linux::ic::cpu_ic_architecture::collect() const {
    struct utsname sysinfo;
    uname(&sysinfo);
    return std::string(sysinfo.machine);
}
