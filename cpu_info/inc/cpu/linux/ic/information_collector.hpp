#ifndef INFORMATION_COLLECTOR_HPP
#define INFORMATION_COLLECTOR_HPP

namespace ic {

    /**
    * @class   information_collector
    * @author  Kirill Zalomov
    * @brief   Интерфейс для сбора какой-либо информации.
    *
    * @details Классы, наследующие данный интерфейс, реализуют конкретные типы
    *          шаблона для специфики своих возвращаемых значений, например, если
    *          сборщик информации должен вернуть число ядер, то имеет смысл
    *          сделать реализацию T -> size_t.
    *
    * @tparam  T Тип возвращаемой информации, которая была собрана
    *
    */
    template<typename T>
    class information_collector {

        virtual ~information_collector() = default;
        public: virtual T collect() const = 0;

    };

}


#endif // INFORMATION_COLLECTOR_HPP
