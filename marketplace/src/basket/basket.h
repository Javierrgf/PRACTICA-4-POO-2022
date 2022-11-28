#include <string>
#include <stdlib.h>
#include <iostream>
#include "product.h"
#include <list>
#include <map>
#include <vector>

#ifndef TV_H
#define TV_H


class Basket{
    private:
        std::list<Product> product_list_;
        float total_;
        
        std::map<string, int>product_quantity_;

    public:
        Basket(std::string id,std::list<Product> product_list = {}, float total = 0.0);
        
        
        inline float get_total(){return total_;};
        inline float set_total(float total){return total_ = total;};
        std::vector<std::string> get_ids();
        std::vector<int> get_qs();
        int get_size();
        
        void add_product(Product p);
        bool delete_product(Product p);        
        bool delete_product(std::string id);
        void delete_basket();
        
        
};


#endif