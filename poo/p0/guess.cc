#include <iostream>
#include <cstdlib>
#include <ctime>


int main(void){
    srand(time(NULL));
    int n;
    std::cout<<"Introduce un numero: ";
    std::cin>>n;
    int r = 1 + rand()%(11-1);
    while(n != r){
        if(n > r){
            std::cout<<"Es mayor, baja un poco";
            std::cout<<"\n";
        }
        else{
            std::cout<<"Es menos, subele a eso";
            std::cout<<"\n";
        }
                    std::cout<<"Introduce un numero: ";
            std::cin>>n;
    }
    std::cout<<"LO LOGRASTE";

}