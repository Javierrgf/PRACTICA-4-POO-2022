//product.h

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product{
    private: 
        std::string id_, name_, maker_, seller_;
        float price_;
    public:
        Product(std::string id, 
                std::string name = "empty",
                std::string maker = "empty",
                std::string seller = "empty",
                float prince = 0.0);
        //Observadores
        inline std::string get_id(){return id_;};
        inline std::string get_name(){return name_;};
        inline std::string get_maker(){return maker_;};
        inline std::string get_seller(){return seller_;};
        inline float get_price(){return price_;};

        //Modificadores
        inline void set_id(std::string id){id_ = id;};
        inline void set_name(std::string name){name_=name;};
        inline void set_maker(std::string maker){maker_=maker;};
        inline void set_seller(std::string seller){seller_ = seller;};
        inline void set_price(float price){price_ = price;};

};


#endif