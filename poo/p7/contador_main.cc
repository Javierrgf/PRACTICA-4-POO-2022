#include <iostream>
#include "contador.h"
using namespace std;
int main(){
    /*Contador c(0, 0, 4), d(56, 0, 778);
    for(int i = 0; i < 10; i++){
        cout<<c<<endl;
        c++;
    }
    while(d.get() > 50){
        d--;
        cout<<d<<endl;
    }*/
    
    Contador ah(99, 10, 100), be;
    cout<<"ah = "<<ah.get()<<endl;
    ah++;
    cout<<"ah = "<<ah.get()<<endl;
    ah++;
    cout<<"ah = "<<ah.get()<<endl;
    
    

}