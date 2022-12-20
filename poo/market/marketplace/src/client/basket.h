#include <string>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <map>
#include <vector>

#ifndef BASKET_H
#define BASKET_H

#include "product.h"

using namespace std;

class Basket{
    private:
        list<Product> product_list_;
        float total_;
        
        map<string, int>product_quantity_;

    public:
        Basket(){total_ = 0.0;};
        
        
        inline float get_total(){return total_;};
        inline float set_total(float total){return total_ = total;};
        vector<string> get_ids();
        vector<int> get_qs();
        int get_size();
        
        void add_product(Product p);
        bool delete_product(Product p);        
        bool delete_product(string id);
        void delete_basket();
        
        
};


#endif