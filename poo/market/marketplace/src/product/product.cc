//product.cc
//product functions
#include <string>
#include "product.h"

using namespace std;

Product::Product(string id,
                string name,
                float price,
                string maker,
                string seller){

    id_ = id;
    name_ = name;
    maker_ = maker;
    seller_ = seller;
    price_ = price;
}



