//tv.h
//tv header

#ifndef TV_H
#define TV_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "product.h"

using namespace std;

class Tv : public Product{
    private:
        float inch_;
    public:
    
        Tv( string id, 
            string name = "empty", 
            float price = 0.0,
            string maker = "empty",
            string seller = "empty",
            float inch = 0.0):Product(id,name,price,maker,seller){inch_=inch;};


        inline float get_inch(){return inch_;};
        bool set_inch(float inch);
        
        
};







#endif