cmake_minimum_required(VERSION 3.10)
project(cpu_info VERSION 1.0 LANGUAGES CXX)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)


add_executable(test_app_cpu_info
    "src/main.cpp"
    "src/linux/cpu/ic/cpu_ic_architecture.cpp"
    "src/linux/cpu/ic/cpu_ic_number_of_cores.cpp"
    "src/linux/cpu/ic/cpu_ic_processor_name.cpp"
    "src/linux/cpu/ic/cpu_ic_temperature.cpp"
    "src/linux/cpu/ic/cpu_ic_workload_of_cores.cpp"
    "src/linux/cpu/ic/information_collector.cpp"
)
target_include_directories(test_app_cpu_info PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/inc/"
)
