//client header
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>
#include <list>
#include "person.h"
#include "basket.h"

using namespace std;

class Client : public Person, public Basket{
    private:
    //private variables
        int premium_;

    public:
        //constructor
        Client(string id, 
            string name = "empty", 
            string surname = "empty",
            string address = "empty",
            string town = "empty",
                string province = "empty",
                string country = "empty",
                int entry_year = 0,
                int premium = 0
                ):Person(id, name, surname, address, town, province, country, entry_year){premium_ = premium;}
        //observers and modifiers
        inline int get_premium(){return premium_;};
        inline void set_premium(int premium){premium_ = premium;};
    
        
};



#endif
