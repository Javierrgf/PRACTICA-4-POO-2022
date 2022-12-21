#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    vector<int> v;
    bool i = true;
    int x, y;
    while(i){
        cout<<"Introduzca un numero entero"<<endl;
        cin>>x;
        v.push_back(x);
        system("clear");
        cout<<"El numero que ha introducido ha sido "<<x<<endl;
        cout<<"Introduce otro?"<<endl;
        cout<<"1. si"<<endl;
        cout<<"2. no"<<endl;
        cout<<"-->";
        cin>>y;
        if(y == 2)
            i = false;
    }
    system("clear");
    cout<<"----------------------VECTOR DESORDENADOR----------------------"<<endl;
    for(int i = 0; i < static_cast<int>(v.size()); i++){
        if(i < 10)
            cout<<"             Posicion "<<i<<":   "<<v[i]<<endl;
        else
            cout<<"             Posicion "<<i<<":  "<<v[i]<<endl;
    }
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
        sort(v.begin(), v.end());
    
   
    system("clear");
    cout<<"----------------------VECTOR ORDENADOR----------------------"<<endl;
    for(int i = 0; i < static_cast<int>(v.size()); i++){
        if(i < 10)
            cout<<"             Posicion "<<i<<":   "<<v[i]<<endl;
        else
            cout<<"             Posicion "<<i<<":  "<<v[i]<<endl;
    }
    cout<<"----------------------------------------------------------------"<<endl;
    return 0;
}
