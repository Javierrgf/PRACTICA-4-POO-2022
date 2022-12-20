#include <iostream>
#include "market.h"

int main(){
    Market m = Market("Mas es menos");
    std::cout<<m.get_slogan()<<endl;
    return 0;
}