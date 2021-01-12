#include<iostream>
#include <string>
#include "Header.h"
using namespace std;
#pragma runtime_checks( "", off )
#pragma warning( push )
#pragma warning( disable : 4700 )


int main()
{
    short a;
    short b;
    short c;
    short d;
    short y = 1;
    Snack* Snickers = new Snack{ "Snickers", 0 };
    Snack* Mars = new Snack{ "Mars", 0 };
    Snack* Bounty = new Snack{ "Bounty", 0 };
    VendingMachine* First = new VendingMachine();
    cout << "Введите количество слотов: " << endl;
    cin >> a;
    cout << endl << "Введите размер слота: " << endl;
    cin >> b;
    First->setquant(a);
    First->setSize(b);
    First->setSlotSizee();
    First->displayWend();
    while (y > 0)
    {
        cout << "1 - Положить / 2 - Забрать батончик?: " << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << endl << "Положить Snikers - 1, Mars - 2, Bounty - 3" << endl;
            cin >> d;
            if (d == 1)
            {
                First->sls(1);
                if (!First->Slotb)
                {
                    Snickers->Snackquant++;
                }
            }
            if (d == 2)
            {
                First->sls(1);
                if (!First->Slotb)
                {
                    Mars->Snackquant++;
                }
            }
            if (d == 3)
            {
                First->sls(1);
                if (!First->Slotb)
                {
                    Bounty->Snackquant++;
                }
            }
            break;
        case 2:
            cout << endl << "Забрать Snikers - 1, Mars - 2, Bounty - 3" << endl;
            cin >> d;
            if ((d == 1) && (Snickers->Snackquant > 0))
            {
                First->sls(-1);
                if (!First->Slote)
                {
                    Snickers->Snackquant--;
                }
            }
            if ((d == 2) && (Mars->Snackquant > 0))
            {
                First->sls(-1);
                if (!First->Slote)
                {
                    Mars->Snackquant--;
                }
            }
            if ((d == 3) && (Bounty->Snackquant > 0))
            {
                First->sls(-1);
                if (!First->Slote)
                {
                    Bounty->Snackquant--;
                }
            }
            else cout << " Таких батончиков нет" << endl;
            break;
        }
        cout << endl;
        First->displayWend();
        Snickers->displaySnack();
        Mars->displaySnack();
        Bounty->displaySnack();
        cout << " Продолжить 1/ Закончить 0" << endl;
        cin >> y;
        cout << endl;
    }
    // delete First;
    delete Snickers;
    delete Mars;
    delete Bounty;
    return 0;
}