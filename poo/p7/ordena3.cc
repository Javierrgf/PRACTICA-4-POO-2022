#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool descen(float i, float j){return i > j;};
bool ascen(float i, float j){return i < j;};

int main(){
    vector<float> v;
    bool i = true;
    float x;  
    int y;
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
    cout<<"En que orden desea el vector?"<<endl;
    cout<<"1.    ASCENDENTE"<<endl;
    cout<<"OTRO. DESCENDENTE"<<endl;
    cout<<"-->";
    cin>>y;
    if(y == 1){
        sort(v.begin(), v.end(), ascen);
    }
    else{
        sort(v.begin(), v.end(), descen);
    }
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
