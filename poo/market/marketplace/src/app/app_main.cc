#include "market.h"
#include "tv.h"
#include "computer.h"
#include "client.h"
#include "seller.h"
#include "basket.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits> 

using namespace std;

int main(){
    Market WALLAPOP("Si no lo usas, subelo.");
   
    Client c1("56X001", "JOSE LUIS", "MARTINEZ", "C/ Solera 5", "Sevilla","SEVILLA", "ESPAÑA", 2022, 0);
    Client c2("56X002", "MARIA LUISA", "CARMONA", "C/ Avda. Republica Argentina 20", "Cordoba","CORDOBA", "ESPAÑA", 2022, 1);
    Client c3("56X003", "MATIAS", "PRATS", "C/ Alta 20", "Villa del Rio","CORDOBA", "ESPAÑA", 2022, 1);
    Client c4("56X004", "JUAN MANUEL", "DE LA FUENTE", "C/ Maria la judia 6", "Cordoba","CORDOBA", "ESPAÑA", 2022, 0);
    Client c5("56X005", "BOFIL", "CABRERA", "C/ Rio Humaya", "Guadalupe","Culiacan", "MEXICO", 2022, 0);

    if(!WALLAPOP.add_client(c1)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c1.get_name()+" "+c1.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_client(c2)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c2.get_name()+" "+c2.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_client(c3)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c3.get_name()+" "+c3.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_client(c4)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c4.get_name()+" "+c4.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_client(c5)){
        cout<<"ERROR AL AÑADIR CLIENTE "+c5.get_name()+" "+c5.get_name_surname()<<endl;
    }
    Seller s1("34X001", "ANTONIO", "RALLO", "C/ Solera 7", "Sevilla","SEVILLA", "ESPAÑA", 2022, "TV");
    Seller s2("34X002", "RODRIGO", "MOLINA", "C/ Avda. Republica Argentina 23", "Cordoba","CORDOBA", "ESPAÑA", 2022, "COMPUTADORAS");
    Seller s3("34X003", "ANDRES", "MENDEZ", "C/ Indalencio Prieto 3", "Cordoba","CORDOBA", "ESPAÑA", 2022, "COMPUTADORAS");
    Seller s4("34X004", "MARIO", "CASAS", "C/ CONCEPCION 1", "Cordoba","CORDOBA", "ESPAÑA", 2022, "MISCELANEO");
    Seller s5("34X005", "SEGAY", "ERISTOFF", "C/ Cremlin", "Moscu","Moscu", "RUSIA", 2022, "TV");
    if(!WALLAPOP.add_seller(s1)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s1.get_name()+" "+s1.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_seller(s2)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s2.get_name()+" "+s2.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_seller(s3)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s3.get_name()+" "+s3.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_seller(s4)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s4.get_name()+" "+s4.get_name_surname()<<endl;
    }
    if(!WALLAPOP.add_seller(s5)){
        cout<<"ERROR AL AÑADIR CLIENTE "+s5.get_name()+" "+s5.get_name_surname()<<endl;
    }
    ComputerType pc1 = static_cast<ComputerType>(5);
    ComputerType pc2 = static_cast<ComputerType>(4);
    
    Tv p1("TVX001", "SAMSUNG HD VERSION 1", 250.00, "SAMSUNNG", "Antonio Rallo", 50.00);
    Tv p2("TVX002", "LG HD VERSION 1", 300.00, "LG ELECTRONICS", "Sergay Eristoff", 40.00);
    Product p3("GrX001", "Mesa de billar profesional", 140.00, "Billar Stars", "Mario Casas");
    Computer p4("PCX001", pc1,"ASUS TUF 2022", 800.00, "ASUS", "Rodrigo Molina");
    Computer p5("PCX002", pc2,"IPAD PRO 3", 800.00, "Apple", "Andres Mendez");
    WALLAPOP.add_product_seller(p1, s1.get_id());
    WALLAPOP.add_product_seller(p2, s2.get_id());
    WALLAPOP.add_product_seller(p3, s3.get_id());
    WALLAPOP.add_product_seller(p4, s4.get_id());
    WALLAPOP.add_product_seller(p5, s5.get_id());

    int x = 0;
    string client_id, product_id;
    bool good_addition;
    while(x < 4){
        cout<<"1. Añadir producto en la cesta de un cliente pidiendo su id de cliente y el id del producto."<<endl;
        cout<<"2. Borrar producto de la cesta de un cliente pidiendo su id de cliente y el id del producto."<<endl;
        cout<<"3. Volcar datos al fichero de salida ventas.txt."<<endl;
        cout<<"4. Salir del programa."<<endl;
        cout<<"--->";
        cin>>x;
        switch(x){
            case 1:
                cout<<"Introduzca su ID de cliente"<<endl;
                cout<<"-->";
                getline(cin, client_id);
                getline(cin, client_id);
                cout<<"Introduzca el ID del producto a comprar"<<endl;
                cout<<"-->";
                getline(cin, product_id);
                cout<<product_id<<endl;
                
                if(product_id == p1.get_id()){
                    WALLAPOP.add_product_client(p1, client_id);
                }
                else if(product_id == p2.get_id()){
                    WALLAPOP.add_product_client(p2, client_id);
                }
                else if(product_id == p3.get_id()){
                    WALLAPOP.add_product_client(p3, client_id);
                }
                else if(product_id == p4.get_id()){
                    WALLAPOP.add_product_client(p4, client_id);
                }
                else if(product_id == p5.get_id()){
                    WALLAPOP.add_product_client(p5, client_id);
                }
                   
            break;
            case 2:
                cout<<"Introduzca su ID de cliente"<<endl;
                cout<<"-->";
                getline(cin, client_id);
                getline(cin, client_id);
                cout<<"Introduzca el ID del producto a comprar"<<endl;
                cout<<"-->";
                getline(cin, product_id);
                getline(cin, product_id);
                

                if(product_id == p1.get_id()){
                    WALLAPOP.delete_product_client(p1, client_id);
                }
                else if(product_id == p2.get_id()){
                    WALLAPOP.delete_product_client(p2, client_id);
                }
                else if(product_id == p3.get_id()){
                    WALLAPOP.delete_product_client(p3, client_id);
                }
                else if(product_id == p4.get_id()){
                    WALLAPOP.delete_product_client(p4, client_id);
                }
                else if(product_id == p5.get_id()){
                    WALLAPOP.delete_product_client(p5, client_id);
                }
            break;
            case 3:
                WALLAPOP.dump_market();
            break;
            case 4:
                cout<<"Hasta la proxima"<<endl;
            break;
            default:

            break;
        }
    }
}