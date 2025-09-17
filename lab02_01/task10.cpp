#include <iostream>
#include <cmath>
using namespace std;

int main() {
setlocale(LC_ALL, "ru_RU.UTF-8");

double a,b,c;
cout<< "Введите стороны треугольника: "<<endl<<"a= ",cin>>a;
cout<<"b= " , cin>>b;
cout<<"c= ", cin>>c;
    if (a+b>c||a+c>b||b+c>a) 
        {cout<<"Да, такой треугольник существует. Его вид: ";
            if (a==b&&a==c&&b==c) {cout<<"Равносторонний";}
            else if (pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(b,2)+pow(a,2)) 
                    {cout<<"Прямоугольный";}
            else if (a==b||b==c||a==c) {cout<<"Равнобедренный";}
            else {cout<<"Такого треугольника не существует";}}

return 0;}