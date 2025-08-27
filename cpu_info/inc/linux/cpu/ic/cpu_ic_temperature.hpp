#ifndef CPU_IC_TEMPERATURE_HPP
#define CPU_IC_TEMPERATURE_HPP


#include "information_collector.hpp"


namespace linux {
    namespace ic {

        /**
        * @class   cpu_ic_temperature
        * @author  Kirill Zalomov
        * @brief   Класс для получения текущей температуры процессора.
        *          Для ОС с ядром Linux.
        *
        * @details Класс возвращает текущую температуру процессора в виде
        *          double. Для получения температуры процессора
        *          используются системные вызовы ядра Linux.
        */
        class cpu_ic_temperature
        : public information_collector<double> {

            double collect() const override;

        };


    }
}


#endif // CPU_IC_TEMPERATURE_HPP
