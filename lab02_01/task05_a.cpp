#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
int r,a,b,z,c;
cout<<"Радиус торта: "<<endl, cin>>r, cout<<"Высота: "<<endl, cin>>z;
cout<<"Стороны коробки: "<<endl<<"a= ", cin>>a, cout<<endl;
cout<<"b= ", cin>>b, cout<<endl;
cout<<"c= ", cin>>c;
    if (2*r<=a&&2*r<=b&&z<=c) {cout<<"Влезет";}
    else {cout<<"Не влезет";}



return 0;}