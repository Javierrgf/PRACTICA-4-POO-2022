#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "seller.h"



using namespace std;

int main(){
    Seller p("44XX", "Carlos", "Gutierrez", "C/ Mesa 1", "Aguilar", "Sevilla", "España", 2021,"Electronics");
    cout<<p.get_sector()<<endl;
    return 0;                     
}