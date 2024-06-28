#include<iostream>
using namespace std;
int main(){
    int b,a,c,r;
    do{
    cout<<"calculadora"<<endl;
    cout<<"1 suma"<<endl;
    cout<<"2 resta"<<endl;
    cout<<"3 divicion"<<endl;
    cout<<"4 multiplicacion"<<endl;
    cout<<"0 salir"<<endl;
    cout<<"ingrese la opcion a elegit: ";cin>>b;
    switch(b){
        case 1:
        cout<<"ingresa el primer valor: ";cin>>a;
        cout<<"ingresa el segundo valor: ";cin>>c;
        r=a+c;
        cout<<"el resultado es: "<<r<<endl;
        break;
        case 2:
        cout<<"ingresa el primer valor: ";cin>>a;
        cout<<"ingresa el segundo valor: ";cin>>c;
        r=a-c;
        cout<<"el resultado es: "<<r<<endl;
        break;
        case 3:
        cout<<"ingresa el primer valor: ";cin>>a;
        cout<<"ingresa el segundo valor: ";cin>>c;
        r=a/c;
        cout<<"el resultado es: "<<r<<endl;
        break;
        case 4:
        cout<<"ingresa el primer valor: ";cin>>a;
        cout<<"ingresa el segundo valor: ";cin>>c;
        r=a*c;
        cout<<"el resultado es: "<<r<<endl;
        break;
        case 0:
        cout<<"gracias por usar el programa."<<endl;
        break;
        default:
        cout<<"ingrese una opcion correcta."<<endl;
        break;
    }
    }while(b!=0);
    return 0;
}