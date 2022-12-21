#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "client.h"



using namespace std;

int main(){
    Client CLI1("0001", "JUAN", "JOSE", "11111", "C/ ALTA", "cordoba", "ESPAÑA", 2002, 4);
    cout<<CLI1.get_premium()<<endl;
    return 0;                     
}
