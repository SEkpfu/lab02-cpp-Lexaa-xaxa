#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a;
cout << "vvedite chislo: ", cin>> a;
    //a)
    if (a>0) {cout <<"pologit"<<endl;}
    else if (a==0) {cout<< "ravno 0"<<endl;}
    else { cout<< "otric"<<endl;}

    //b)
int s;
    s=a%2;
    if (s==0) {cout<< "chet";}
    else {cout<< "nechet";}

return 0;
}