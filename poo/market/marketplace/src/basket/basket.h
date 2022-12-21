//basket.h
//basket header
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
    //private variables
        list<Product> product_list_;
        float total_;
        
        map<string, int>product_quantity_;
    
    public:
        //constructor
        Basket(){total_ = 0.0;};
        
        //methods
        //observer
        inline float get_total(){return total_;};
        //modifier
        inline float set_total(float total){return total_ = total;};
        vector<string> get_ids(); //returns product id's vector
        vector<int> get_qs(); //returns product quantities's vector
        int get_size();//returns basket size
        
        void add_product(Product p);
        bool delete_product(Product p);        
        bool delete_product(string id);
        void delete_basket();
        
        
};


#endif
