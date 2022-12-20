#ifndef COMPUT_H
#define COMPUT_H

#include <string>
#include "../product/product.h"

enum class ComputerType{
    Desktop = 1,
    Laptop,
    Server,
    Tablet,
    Gaming
};

class Computer : public Product{
    private:
        ComputerType type_;
    public: 
        Computer(
            std::string id,
            ComputerType type,
            std::string name = "empty",
            std::string maker = "empty",
            std::string seller = "empty",
            float price = 0.0
        );

    inline ComputerType get_type()const{return type_;};
    inline void set_type(ComputerType type){ type_= type;};
    

};


#endif