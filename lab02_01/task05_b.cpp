#include <iostream>
#include <cmath>
using namespace std;

int main() {
setlocale(LC_ALL, "ru_RU.UTF-8");
int x,y,z,a,b;
cout<<"Введите стороны кирпича: "<<endl<<"x= ", cin>>x, cout<<endl;
cout<<"y= ", cin>>y, cout<<endl;
cout<<"z= ", cin>>z, cout<<endl;
cout<<"Введите стороны отверстия"<<endl<<"a=", cin>>a, cout<<endl<<"b= ", cin>>b;
    if ((x<=a&&y<=b)||(x<=b&&y<=a)||(x<=a&&z<=b)||(x<=b&&z<=a)||(y<=a&&z<=b)||(y<=b&&z<=a))
    {cout<<"Влезет";}
    else {cout<<"Не влезет";}

return 0;}