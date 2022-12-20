#include <string>
#include "product.h"

Product::Product(std::string id,
                std::string name = "empty",
                std::string maker = "empty",
                std::string seller = "empty",
                float price = 0.0){

    id_ = id;
    name_ = name;
    maker_ = maker;
    seller_ = seller;
    price_ = price;
}



