#include <string>
#include <iostream>
#include "computer.h"

using namespace std;

int main(void){

    ComputerType ty = ComputerType::Gaming;
    Computer pc("3450",ty,"pese",1980.0,"LG", "El corte ingles");

    cout<<pc.get_id()<<"\n";
    cout<<pc.get_maker()<<"\n";
    cout<<pc.get_seller()<<"\n";
    cout<<pc.get_price()<<"\n";
    

    return 0;

}