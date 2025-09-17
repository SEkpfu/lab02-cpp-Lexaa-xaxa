#include <iostream>
using namespace std;
int main() {
setlocale(0, "");
setlocale(LC_ALL, "ru_RU.UTF-8");
int dM, dW;
cout << "Введите дату: ";
cout << "День месяца: ";
cin >> dM;
cout << "Номер дня в неделе: ";
cin >> dW;
    if ((13 == dM&&(5 == dW||2 == dW))||(dM==17 && dW==5)) {{cout << "неудачный день ";}}

return 0;}