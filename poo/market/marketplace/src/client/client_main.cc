#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "client.h"



using namespace std;

int main(){
    Client cliente("0001", "miguel", "angel", "6876", "Bichuela", "Cordoba", "francia", 2002, 4);
    cout<<cliente.get_premium()<<endl;
    return 0;                     
}