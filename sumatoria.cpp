#include<iostream>
using namespace std;
int suma(int );
int factorial(int );
int main(){
    int n,sum;
    sum=suma(n);
    cout<<"la sumatoria es: "<<sum<<endl;
    return 0;
}
int suma(int a){
    int s;
    s=0;
    for(int i=1; i<a;i++){
        s=s+(factorial(i)/2*i);
    }
}
int factorial(int b){
    int f=1;
    for(int i =2; i<b;i++){
        f=f*i;
    }
    return f;
}