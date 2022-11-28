#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "tv.h"

using namespace std;


bool Tv::set_inch(float inch){
    if(inch > 0){
        inch_ = inch;
        return true; 
    }
    else{
        return false;
    }
}

