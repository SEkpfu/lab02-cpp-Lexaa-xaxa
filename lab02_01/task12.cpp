#include <iostream>

using namespace std;

int main() {
setlocale(LC_ALL, "ru_RU.UTF-8");

int x,y,z;
 cout<<"Введите три числа: "<<endl<<"Первое: ", cin>>x;
 cout<<"Второе: ", cin>>y;
 cout<<"Третье: ", cin>>z;
//a)
int summ;
summ=0;
if(x>10){summ=summ+x;}
if(y>10){summ=summ+y;}
if(z>10){summ=summ+z;}
cout<<"Сумма чисел больше 10: "<<summ;
//b)
int kolvo;
kolvo=0;
if (x%2==0) {kolvo= kolvo+1;}
if (y%2==0) {kolvo=kolvo+1;}
if (z%2==0) {kolvo= kolvo+1;}
cout<<"Количество четных чисел: "<<kolvo;
//c)
cout<<"Среднее арифметическое число: "<<(x+y+z)/3;
if ((y>x&&x>z)||(z>x&&x>y)) {cout<<"Среднее число"<<x;}
else if ((x>y&&y>z)||(z>y&&y>y)) {cout<<"Среднее число"<<y;}
else if ((x>z&&z>y)||(y>z&&z>x)) {cout<<"Среднее число"<<z;}
//d)
if(x<y&&x<z) {cout<<"Первое число наименьшее";}
else if(y<x&&y<z) {cout<<"Второе число наименьшее";}
else {cout<<"Третье число наименьшее";}

return 0;}