//product.h

#ifndef PRODCUT_H
#define PRODCUT_H


#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Product{
    private: 
        string id_, name_, maker_, seller_;
        float price_;
    public:
        Product(string id, 
                string name = "empty",
                float price = 0.0,
                string maker = "empty",
                string seller = "empty");
        //Observadores
        inline string get_id(){return id_;};
        inline string get_name(){return name_;};
        inline string get_maker(){return maker_;};
        inline string get_seller(){return seller_;};
        inline float get_price(){return price_;};

        //Modificadores
        inline void set_id(string id){id_ = id;};
        inline void set_name(string name){name_=name;};
        inline void set_maker(string maker){maker_=maker;};
        inline void set_seller(string seller){seller_ = seller;};
        inline void set_price(float price){price_ = price;};

};


#endif