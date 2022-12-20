#ifndef TV_H
#define TV_H


#include <string>
#include "../product/product.h"

class Tv : public Product{
    private:
        float inch_;
    public:
        Tv(std::string id,
            std::string name = "empty",
            std::string maker = "empty",
            std::string seller = "empty",
            float price = 0.0, 
            float inch = 0.0);

    inline float get_inch(){return inch_;};

    bool set_inch(float inch);

};

#endif