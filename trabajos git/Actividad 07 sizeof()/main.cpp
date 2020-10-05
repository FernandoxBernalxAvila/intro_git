#include <iostream>

using namespace std;

int main() {
    char caracter;
    int dato;
    short corto;
    float flotante;
    double doble;
    long largo;

    cin>>caracter;
    cout << sizeof(caracter)<<endl; 

    cin>>dato;
    cout << sizeof(dato)<<endl; 

    cin>>corto;
    cout << sizeof(corto)<<endl; 

    cin>>flotante;
    cout << sizeof(flotante)<<endl; 

    cin>>doble;
    cout << sizeof(doble)<<endl; 

    cin>>largo;
    cout << sizeof(largo)<<endl; 

    return 0;
}