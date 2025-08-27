#ifndef CPU_IC_PROCESSOR_NAME_HPP
#define CPU_IC_PROCESSOR_NAME_HPP


#include "information_collector.hpp"
#include <string>


namespace linux {
    namespace ic {

        /**
        * @class   cpu_ic_processor_name
        * @author  Kirill Zalomov
        * @brief   Класс для получения названия процессора.
        *          Для ОС с ядром Linux.
        *
        * @details Класс возвращает название процессора в виде std::string.
        *          Для получения названия процессора используются системные
        *          вызовы ядра Linux.
        */
        class cpu_ic_processor_name
        : public information_collector<std::string> {

            std::string collect() const override;

        };


    }
}


#endif // CPU_IC_PROCESSOR_NAME_HPP
