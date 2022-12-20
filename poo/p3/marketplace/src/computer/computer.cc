#include<string>

#include "computer.h"


Computer::Computer(std::string id,
            ComputerType type,
            std::string name = "empty",
            std::string maker = "empty",
            std::string seller = "empty",
            float price = 0.0):Product(
            id,
            name,
            maker,
            seller,
            price
            ){
                type_ = type;
                
}
/*std::string print_type(ComputerType TY){
    switch(TY){
        case ComputerType::Desktop:{
            return "Desktop\n";
        }
        break;
        case ComputerType::Laptop:{
            return "Laptop\n";
        }
        break;
        case ComputerType::Server:{
            return "Server\n";
        }
        break;
        case ComputerType::Tablet:{
            return "Tablet\n";
        }
        break;
        case ComputerType::Gaming:{
            return "Gaming\n";
        }
        break;
    }
    return 0;
}
*/
