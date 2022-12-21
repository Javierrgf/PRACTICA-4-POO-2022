//computer.h
//computer header
#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "product.h"

enum class ComputerType{
    Desktop,
    Laptop,
    Server,
    Tablet,
    Gaming
};

class Computer : public Product{
    private:
        //private variables
        ComputerType type_;
    public: 
        //constructor
        Computer(
            std::string id,
            ComputerType type,
            std::string name = "empty",
            float price = 0.0,
            std::string maker = "empty",
            std::string seller = "empty"
        ):Product(
            id,
            name,
            price,
            maker,
            seller
            ){type_ = type;}
       //observer and modifier
    inline ComputerType get_type()const{return type_;};
    inline void set_type(ComputerType type){type_= type;};
    

};


#endif
