#include <string>
#include <list>
#include "../product/product.h"

class Basket{
    private:
        std::string id_;
        std::list product_list_<Product>;
        float total_;
    public:
        Basket(
            std::string id,
            std::list product_list<Product>,
            float total
        )
        inline void set_id(){id_ = id;};
        inline std::string get_id()const{return id;};
        inline void add_product(Product p){product_list.push_back(p);}
        bool delete_product(Product p);

};