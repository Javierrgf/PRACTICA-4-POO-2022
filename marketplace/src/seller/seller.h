#ifndef SELLER_H
#define SELLER_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include "person.h"
#include "basket.h"

using namespace std;

class Seller : public Person, public Basket{
    private:

        string sector_;

    public:

        Seller( string id, 
                string name = "empty", 
                string surname = "empty",
                string address = "empty",
                string town = "empty",
                string province = "empty",
                string country = "empty",
                int entry_year = 0,
                string sector = ""
                ):Person(id, name, surname, address, town, province, country, entry_year){sector_ = sector;}

        inline string get_sector(){return sector_;};
        inline void set_sector(string sector){sector_ = sector;};
    
    //friend void actualizar_total(float total);
    //string get_ids(); //<-
    //int get_qs(); //<-
        
};



#endif