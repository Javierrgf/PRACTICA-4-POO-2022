#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "basket.h"
#include "product.h"



using namespace std;

 int main(){
    Basket c1;
    Product p1("11XX"), p2("12XX");
    c1.add_product(p1);
    printf("En el almacén hay %d productos", c1.get_size());
    return 0;                       
}
