#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
double x,y;
cout<<"Введите координаты: "<<endl<<"x= ", cin>>x;
cout<<"y= ", cin>>y, cout<<endl;
//a)
    if(x>=-2&&x<=0&&y>=0&&y<=1) {cout<<"A: Принадлежит"<<endl;}
    else {cout<<"A: Не принадлежит"<<endl;}
//b)
double r= sqrt(pow(x,2)+pow(y,2));
    if (r<=5&&y<=5&&y>=0)  {cout<<"B: Принадлежит"<<endl;}
    else {cout<<"B: Не принадлежит"<<endl;}
//c)
    if (r>=3&&r<=6&&x>=0)  {cout<<"C: Принадлежит"<<endl;}
    else {cout<<"C: Не принадлежит"<<endl;}
//d)
    if(-2*x+2-y>=0&&x>=0&&y>=0)  {cout<<"D: Принадлежит"<<endl;}
    else {cout<<"D: Не принадлежит"<<endl;}

return 0;}