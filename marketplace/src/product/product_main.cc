#include <string>
#include <iostream>
#include "product.h"

int main(){
    Product p("970jjl", "Paraguas", 8.95, "Siemens", "El corte ingles");
    std::cout<<"ID: ";
    std::cout<<p.get_id()<<"\n";
    std::cout<<"Nombre: ";
    std::cout<<p.get_name()<<"\n";
    std::cout<<"Fabricante: ";
    std::cout<<p.get_maker()<<"\n";
    std::cout<<"Comprador: ";
    std::cout<<p.get_seller()<<"\n";
    std::cout<<"Presio: ";
    std::cout<<p.get_price()<<"\n";

    return 0;
}