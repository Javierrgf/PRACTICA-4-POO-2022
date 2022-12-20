#include <string>
#include "tv.h"


Tv::Tv(std::string id,
                std::string name,
                std::string maker,
                std::string seller,
                float price,
                float inch) : Product(id,
                name,
                maker,
                seller,
                price){

    if(inch > 0.0)
        inch_ = inch;
    else
        inch_ = 0.0;



}

bool Tv::set_inch(float inch){
    if(inch > 0){
        inch_ = inch;
        return true;
    }
    else 
        return false;
}

                
                    
                