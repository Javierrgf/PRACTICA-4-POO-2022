#include <string>
#include <iostream>
#include "person.h"

int main()
{

	Person p("2345", "Pepito", "Perez", "Calle Pez", "Lucena", "Albacete", "Portugal", 203);

	std::cout<<p.get_id()<<"\n";
	std::cout<<p.get_name()<<"\n";
	std::cout<<p.get_surname()<<"\n";
	std::cout<<p.get_address()<<"\n";
	std::cout<<p.get_town()<<"\n";
	std::cout<<p.get_province()<<"\n";
	std::cout<<p.get_country()<<"\n";
	std::cout<<p.get_entry_year()<<"\n";

	std::cout<<p.get_full_address()<<"\n";

	if(p.set_entry_year(2003)){
		std::cout<<p.get_entry_year()<<"\n";
	}

	return 0;
}