#include <iostream>
#include <cmath>
// #include <windows.h> Sleep(3000)
using namespace std;

int main() {
setlocale(LC_ALL, "ru_RU.UTF-8");

int dr,mr,yr,ds,ms,ys;
cout<<"Введите дату рождения: "<<endl<<"Day: ", cin>>dr;
cout<<"Month: ", cin>>mr;
cout<<"Year: ", cin>>yr;

cout<<"Введите сегодняшнюю дату: "<<endl<<"Day: ", cin>>ds;
cout<<"Month: ", cin>>ms;
cout<<"Year: ", cin>>ys;

int g=ys-yr-1;
if (ms>mr) {g=g+1;}
else if (ms==mr) {
        if (ds>dr) {g=g+1;}
        else if (dr==ds) {g=g+1, cout<<"С днем рождения!";}}

cout<<"Ваш возраст: "<<g<<" ";
        if (g%10==1) {cout<<"год";}
        else if ((g%10==2 || g%10==3 || g%10==4) && g!=12 && g!=13 && g!=14)
                {cout<<"года";}
        else {cout<<"лет";}


return 0;}





//     int mer, mes;
//     switch(mr) {
//         case 2: mer=31; break;
//         case 3: mer=58; break;
//         case 4: mer=90; break;
//         case 5: mer=120; break;
//         case 6: mer=151; break;
//         case 7: mer=181; break;
//         case 8: mer=212; break;
//         case 9: mer=243; break;
//         case 10: mer=273; break;
//         case 11: mer=304; break;
//         case 12: mer=334; break;
//         case 1: mer=0; break;}
//     switch(ms) {
//         case 2: mes=31; break;
//         case 3: mes=58; break;
//         case 4: mes=90; break;
//         case 5: mes=120; break;
//         case 6: mes=151; break;
//         case 7: mes=181; break;
//         case 8: mes=212; break;
//         case 9: mes=243; break;
//         case 10: mes=273; break;
//         case 11: mes=304; break;
//         case 12: mes=334; break;
//         case 1: mes=0; break;}
    
    
// int god=(((ys*365)+mes+ds)-(yr*365)+mer+dr)/365.25;