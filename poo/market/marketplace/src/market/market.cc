//market.cc
//market functions
#include "product.h"

#include <vector>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include "market.h"
#include "client.h"
#include "seller.h"




bool Market::add_client(Client c){
    std::list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it){
        if(it->get_id() == c.get_id()){
            return false;
        }
    }
    client_list_.push_back(c);
    return true;
}
bool Market::add_seller(Seller s){
    std::list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it){
        if(it->get_id() == s.get_id()){
            return false;
        }
    }
    seller_list_.push_back(s);
    return true;
}
int Market::n_clients(){
    int n = client_list_.size();
    return n;
    
}
int Market::n_sellers(){
    int n = seller_list_.size();
    return n;
}
bool Market::delete_client(Client c){
    std::list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it){
        if(it->get_id() == c.get_id()){
            client_list_.erase(it);
            return true;
        }
    }
    return false;
}
bool Market::delete_seller(Seller s){
    std::list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it){
        if(it->get_id() == s.get_id()){
            seller_list_.erase(it);
            return true;
        }
    }
    return false;
}
bool Market::add_product_seller(Product p, std::string id_seller){
    std::list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it){
        if(it->get_id() == id_seller){
            it->add_product(p);
            return true;
        }
    }
    return false;
}
bool Market::add_product_client(Product p, std::string id_client){
    std::list<Client>::iterator it;
    std::list<Seller>::iterator it2;
    for(it2 = seller_list_.begin(); it2 != seller_list_.end(); ++it2){
        if(it2->delete_product(p) == true){
            for(it = client_list_.begin(); it != client_list_.end(); ++it){
                if(id_client == it->get_id()){
                    it->add_product(p);
                    return true;
                }
            }
        }
    }
    return false;
}
bool Market::delete_product_seller(Product p, std::string id_seller){
    std::list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it){
        if(id_seller == it->get_id()){
            if(it->delete_product(p) == true){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}
bool Market::delete_product_client(Product p, std::string id_client){
    std::list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it){
        if(id_client == it->get_id()){
            if(it->delete_product(p) == true){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}
float Market::get_money_in_basket(){
    float resul = 0.00;
    std::list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it){
        resul += it->get_total();
    }
    return resul;
}
void Market::dump_market(){
    std::list<Client>::iterator it;
    vector<string> idprods;
    vector<int> qprods;
    ofstream wr;
    wr.open("ventas.txt", ios::out);
    if(wr.fail()){
        cout<<"Error de lectura"<<endl;
        return;
    }
    wr<<"|----------------------------------------|"<<endl;
    wr<<"|CLIENT ID  | PRODUCT ID  | PRODUCT QTY  |"<<endl;
    for(it = client_list_.begin(); it != client_list_.end() ; ++it){
        qprods = it->get_qs();//it stores product quantities into qprods vector
        idprods = it->get_ids();//it stores product ids into idprods vector
        for(int i = 0; i < it->get_size(); i++){
            wr<<"| "+ it->get_id()+"    | "+ idprods[i]+ "      | "<<qprods[i]<<"            |"<<endl;
        }
    }
    wr<<"|----------------------------------------|"<<endl;
    wr<<"|TOTAL: "<<get_money_in_basket()<<"|"<<endl;
    wr<<"|----------------------------------------|"<<endl;
    wr.close();
}

