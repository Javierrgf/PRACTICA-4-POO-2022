#include <iostream>
#include <stdlib.h>
#include <string>
#include "basket.h"
#include "product.h"



using namespace std;

 int main(){
    Basket canasta;
    Product prod("333333");
    canasta.add_product(prod);
    cout<<"Hay <<canasta.get_size()<<" productos."<<endl;
    return 0;                       
}
