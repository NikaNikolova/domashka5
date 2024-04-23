#include <iostream>
#include <locale>
#include <windows.h>
#include "Human.h"
#include "Room.h"
#include "MobilePhone.h"
#include "Raccoon.h"
#include "Microphone.h"
using namespace std;

int main()
{
    //setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Human m;
    m.SetName("Николь");
    m.SetLaugh("ХАХАХАХА!");
    m.SetEnergy(100);//%
    m.SetAge(18);//ðîê³â
    m.SetGrowth(157.6);//ñì
    m.SetHairColor("Русый");
    m.SetGender("девушка");
    m.sits = false;
    m.SetHungry(25);

    MobilePhone mb;

    Raccoon r;
    r.noize = "РРР!";
    r.SetNick("Лео");
    r.SetWeight(3.5); //kg
    r.age = 1;
    r.SetEnergy(100);
    r.SetHungry(100);

    Room room;
    room.room_closed = "кімната замкнута...";
    string meal;

    m.Print();
    r.Print();
    cout << "------------------------------------" << endl;
    room.TheRoomIsClosed(m);
    mb.WatchingVideo(m);
    r.Run(m);
    r.Jump(r);
    cout << "Що буде їсти єнот?" << endl;
    cin >> meal;
    r.Eat(m, meal);
    cout << "------------------------------------" << endl;
    m.Print();
    r.Print();


}