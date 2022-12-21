#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "client.h"



using namespace std;

int main(){
    //id, name, surname, address, town, province, country, entry_year
    Client CLI1("0001", "JUAN", "JOSE",  "C/ ALTA","Villa del rio", "cordoba", "ESPAÑA", 2002, 4);
    cout<<CLI1.get_premium()<<endl;
    return 0;                     
}
