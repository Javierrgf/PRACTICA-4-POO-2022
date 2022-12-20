#include <iostream>
#include <string>
#include "person.h"

int main(){
    Person hola("2345", "Yoni", "melabo", "calle la pantomima", "jerez", "cai", "españa", 2003);

    std::cout<<hola.get_id()<<"\n";
    std::cout<<hola.get_name()<<"\n";
    std::cout<<hola.get_surname()<<"\n";
    std::cout<<hola.get_address()<<"\n";
    std::cout<<hola.get_town()<<"\n";
    std::cout<<hola.get_country()<<"\n";
    std::cout<<hola.get_entry_year()<<"\n";

    std::cout<<hola.get_full_address()<<"\n";

    if(hola.set_entry_year(2003)){
        std::cout<<hola.get_entry_year()<<"\n";
    }

}