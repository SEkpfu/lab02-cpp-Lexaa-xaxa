#include <iostream>
using namespace std;

int main()
{
setlocale(0, "");
setlocale(LC_ALL, "ru_RU.UTF-8");
double a1, b1, a2, b2, a3, b3;
    cout << "Введите стороны 1-го прямоугольника \n";
    cout << "a1= "; cin >> a1;
    cout << "b1= "; cin >> b1;
    cout << "Введите стороны 2-го прямоугольника \n";
    cout << "a2= "; cin >> a2;
    cout << "b2= "; cin >> b2;
    cout << "Введите стороны 3-го прямоугольника \n";
    cout << "a3= "; cin >> a3;
    cout << "b3= "; cin >> b3;
double s1, s2, s3;
s1 = a1 * b1;
s2 = a2 * b2;
s3= a3 * b3;
cout << "max площадь? = " << (s1 > s2 && s1>s3 ? s1 : (s2>s3 && s2>s1 ? s2: s3))<<endl;
cout << "max площадьM = " << max(max(s1, s2), max(s2,s3))<<endl;
if (s1>s2&&s1>s3) {cout<<"max площадьif = "<< s1<<endl;}
else if (s2>s1&&s2>s3) {cout<<"max площадьif = "<< s2<<endl;}
else {cout<<"max площадьif = "<< s3<<endl;}
return 0;}

