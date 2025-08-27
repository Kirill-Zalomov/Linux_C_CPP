#ifndef CPU_IC_ARCHITECTURE_HPP
#define CPU_IC_ARCHITECTURE_HPP


#include "information_collector.hpp"
#include <string>


namespace ic {
    namespace linux {

        /**
        * @class   cpu_ic_architecture
        * @author  Kirill Zalomov
        * @brief   Класс для получения архитектуры процессора.
        *          Для ОС с ядром Linux.
        *
        * @details Класс возвращает название архитектуры процессора в виде
        *          std::string. Для получения названия архитектуры процессора
        *          используются системные вызовы ядра Linux.
        */
        class cpu_ic_architecture
        : public ic::information_collector<std::string> {

            std::string collect() const override;

        };


    }
}


#endif // CPU_IC_ARCHITECTURE_HPP

