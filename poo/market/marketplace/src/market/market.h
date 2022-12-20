

#include <string>
#include <stdlib.h>
#include <iostream>
#include <list>
#include "client.h"
#include "product.h"
#include "seller.h"

#ifndef MARKET_H
#define MARKET_H

class Market{
    private:
        std::list<Client> client_list_;
        std::list <Seller> seller_list_;
        std::string slogan_;
    public:
        Market(std::string slogan){slogan_ = slogan;}

        inline std::string get_slogan(){return slogan_;};
        inline void set_slogan(std::string slogan){slogan_ = slogan;};
        bool add_client(Client c);
        bool add_seller(Seller s);
        int n_clients();
        int n_sellers();
        bool delete_client(Client c);
        bool delete_seller(Seller s);
        bool add_product_seller(Product p, std::string id_seller);
        bool add_product_client(Product p, std::string id_client);
        bool delete_product_seller(Product p, std::string id_seller);
        bool delete_product_client(Product p, std::string id_client);
        float get_money_in_basket();
        void dump_market();

        

};

#endif