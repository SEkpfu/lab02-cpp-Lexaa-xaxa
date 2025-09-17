#include <iostream>
#include <cmath>
using namespace std;

int main () {
setlocale(LC_ALL, "ru_RU.UTF-8");

double x,y;
char z;
cout<<"Введите два числа: "<<endl<<"x=", cin>>x;
cout<<"y=", cin>>y, cout<<endl;
cout<<"Введите нужную операцию: ", cin>>z, cout<<endl;
    switch(z) {
        case '*': cout<<"x*y= "<<x*y; break;
        case '+': cout<<"x+y= "<<x+y; break;
        case '-': cout<<"x-y= "<<x-y; break;
    }

return 0;}