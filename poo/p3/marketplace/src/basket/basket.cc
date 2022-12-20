#include <string>
#include <list>
#include "basket.h"
#include "../product/product.h"

Basket::Basket(std::string id,
                std::list product_list<Product>,
                float total){
                    id_ = id;
                    total_ = total;
                    std::list<Product>::iterator i;
                    for(i = product_list.begin(); i != product_list.end();i++){
                        product_list_.push_back(*i);
                    } 
                }
