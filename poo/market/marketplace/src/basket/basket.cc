//basket.cc
//basket functions
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "product.h"
#include "basket.h"
#include <vector>
#include <list>

using namespace std;

//constructor
void Basket::add_product(Product p){
    if(product_quantity_.count(p.get_id()) == 0){
        product_list_.push_back(p); //<-
        product_quantity_[p.get_id()] = 1;
    }
    else{
        product_quantity_[p.get_id()] += 1;
    }
    Basket::total_ = Basket::total_ + p.get_price();
}

bool Basket::delete_product(Product p){
    list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); ++it){
        if((*it).get_id() == p.get_id()){

            if(product_quantity_[p.get_id()] > 0){
                product_quantity_[p.get_id()]--;
            }

            if(product_quantity_[p.get_id()] == 0){ // Si la cantidad es cero se elimina el producto de la lista
                product_list_.erase(it);
                product_quantity_.erase(p.get_id()); //Tambien el de la cesta
            }
            Basket::total_ = Basket::total_ - (*it).get_price();
            return true; 
        }
    }
    return false;
}

vector<string> Basket::get_ids(){
    vector<string>product_ids;
    list<Product>::iterator it;
    for(it = product_list_.begin(); it != product_list_.end(); ++it){
        product_ids.push_back((*it).get_id());
    }
    return product_ids;
}

vector<int> Basket::get_qs(){
    vector<int>product_qs;
    list<Product>::iterator it;
    for(it = product_list_.begin(); it != product_list_.end(); ++it){
        product_qs.push_back(product_quantity_[(*it).get_id()]);
    }
    return product_qs;
}

bool Basket::delete_product(string id){
    list<Product>::iterator it;
    for(it = product_list_.begin(); it != product_list_.end(); ++it){
        if((*it).get_id() == id){
                if(product_quantity_[id] > 0){
                    product_quantity_[id]--;
                }
                if(product_quantity_[id] == 0){ // Si la cantidad es cero se elimina el producto de la lista
                    product_list_.erase(it);
                    product_quantity_.erase(id); //Tambien el de la cesta
                }
                Basket::total_ = Basket::total_ - (*it).get_price();
                return true; 
        }
    }
    return false;

}

void Basket::delete_basket(){
    product_list_.erase(product_list_.begin(), product_list_.end());
    product_quantity_.clear();
}



int Basket::get_size(){
    int n = product_list_.size();
    return n;
}

