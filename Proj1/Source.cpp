#include "Header.h"
#include <string>
#include<math.h> // подключаю русский язык для консоли windows если тестировать не в Visual Studio, то этот блок надо удалить
#include<windows.h>


char bufRus[256];

char* Rus(const char* text)
{
    CharToOemA(text, bufRus);
    return bufRus;
}// Удалять до этой строки и везде придется удалить переменную Rus иначе не откомпилирует.



void Snack::initSnack(string name1, int quant)
{
    SnackName = name1;
    Snackquant = quant;
}

void Snack::setSize(long size)
{
    Snackquant = size;
}

void Snack::displaySnack()
{
    cout << Rus("Имя продукта - ") << SnackName << endl;
    cout << Rus("Количество - ") << Snackquant << endl;
}

void VendingMachine::setSize(short size)
{
    if (size < 20 && size > 0)
        SlotSize = size;
    else cout << "Размер не меньше 0, но не болеее 20" << endl;
}

void VendingMachine::setquant(short size)
{
    if (size < 20 && size > 0)
    {
        Slotquant = size;
    }
    else cout << "Количество не меньше 0, но не болеее 20" << endl;
}

void VendingMachine::initVending(short ssize, short squant)
{
    SlotSize = ssize;
    Slotquant = squant;
}
void VendingMachine::setSlotSizee()
{
    SlotSizee = Slotquant * SlotSize;
}
void VendingMachine::sls(short d)
{
    if (((SlotSizee == (Slotquant * SlotSize)) && (d > 0)) or ((SlotSizee == 0) && (d < 0)) or ((SlotSizee > 0) && (SlotSizee < (Slotquant * SlotSize))))
    {
        SlotSizeb = SlotSizeb + d; // Заполняем слот
        SlotSizee = SlotSizee - d; // Заполняем слот
    }
    else if ((SlotSizee == 0) && (d > 0))
    {
        cout << endl << "Все слоты заполнены" << endl;
        Slotb = 1;
    }
    else if ((SlotSizee == (Slotquant * SlotSize)) && (d < 0))
    {
        cout << endl << "Все слоты пустые" << endl;
        Slote = 1;
    }

}

void VendingMachine::displayWend()
{
    cout << "Размер слота: " << SlotSize << endl;
    cout << "Количество слотов: " << Slotquant << endl;
    cout << "Всего слотов: " << Slotquant * SlotSize << endl;
    cout << "Занято батончиками: " << SlotSizeb << endl;
    cout << "Пустых слотов: " << SlotSizee << endl;
    if (SlotSizee == 0)
    {
        Slotb = 1;
        Slote = 0;
    }
    else if (SlotSizee == (Slotquant * SlotSize))
    {
        Slote = 1;
        Slotb = 0;
    }
    else if ((SlotSizee < (Slotquant * SlotSize)) && (SlotSizee > 0))
    {
        Slote = 0;
        Slotb = 0;
    }
}