#ifndef CPU_IC_WORKLOAD_OF_CORES_HPP
#define CPU_IC_WORKLOAD_OF_CORES_HPP


#include "information_collector.hpp"
#include <list>


namespace linux {
    namespace ic {

        /**
        * @class   cpu_ic_workload_of_cores
        * @author  Kirill Zalomov
        * @brief   Класс для получения текущей загрузки каждого из ядер
        *          процессора. Для ОС с ядром Linux.
        *
        * @details Класс возвращает текущую текущую загрузку ядер процессора
        *          в виде std::list<double>. Для получения загрузки процессора
        *          используются системные вызовы ядра Linux.
        */
        class cpu_ic_workload_of_cores
        : public information_collector<std::list<double>> {

            std::list<double> collect() const override;

        };


    }
}


#endif // CPU_IC_WORKLOAD_OF_CORES_HPP
