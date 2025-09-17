#include <iostream>
#include <cmath>
using namespace std;

int main() {
setlocale(LC_ALL, "ru_RU.UTF-8");

double x,y,r;
cout<<"Введите координаты"<<endl<<"x= ", cin>>x, cout<<endl;
cout<<"y= ", cin>>y;
r= sqrt(pow(x,2)+pow(y,2));
    if (r<=2) {cout<<"10 очков";}
    else if (r<=4) {cout<<"5 очков";}
    else {cout<<"0 очков";} 

return 0;}