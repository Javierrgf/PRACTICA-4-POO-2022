//person.cc
//Declarations for class Person methods

#include <string>
#include "person.h"

Person::Person(std::string id,
		std::string name,
		std::string surname,
		std::string address,
		std::string town,
		std::string province,
		std::string country,
		int entry_year){

	id_=id;
	name_=name;
	surname_=surname;
	address_=address;
	town_=town;
	province_=province;
	country_=country;

	if(entry_year<2000){
		entry_year_=0;
	}else{
		entry_year_=entry_year;
	}

}

/* Devuelve un string con la concatenación de name,
un espacio en blanco y surname en la primera línea;
address en la segunda; town, una coma, un espacio en
blanco y province en la tercera; y country en la última
seguida de un nuevo salto de línea.
*/
std::string Person::get_full_address(){

	return name_+" "+surname_+"\n" \
			+address_+"\n" \
			+town_+","+" "+province_+"\n" \
			+country_+"\n";

}

/* Devuelve un dato de tipo bool y que recibe un entero con el
nuevo año que tiene que ser mayor a 2000. Si al valor recibido es
>2000 se cambia el atributo correspondiente y se devuelve true,
en caso contrario, no se cambia y se devuelve false.
*/
bool Person::set_entry_year(int entry_year){

	if(entry_year>2000){
		entry_year_=entry_year;
		return true;
	}else return false;
}