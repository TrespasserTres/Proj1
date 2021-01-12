#include "Header.h"
#include <string>
#include<math.h> // ��������� ������� ���� ��� ������� windows ���� ����������� �� � Visual Studio, �� ���� ���� ���� �������
#include<windows.h>


char bufRus[256];

char* Rus(const char* text)
{
    CharToOemA(text, bufRus);
    return bufRus;
}// ������� �� ���� ������ � ����� �������� ������� ���������� Rus ����� �� �������������.



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
    cout << Rus("��� �������� - ") << SnackName << endl;
    cout << Rus("���������� - ") << Snackquant << endl;
}

void VendingMachine::setSize(short size)
{
    if (size < 20 && size > 0)
        SlotSize = size;
    else cout << "������ �� ������ 0, �� �� ������ 20" << endl;
}

void VendingMachine::setquant(short size)
{
    if (size < 20 && size > 0)
    {
        Slotquant = size;
    }
    else cout << "���������� �� ������ 0, �� �� ������ 20" << endl;
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
        SlotSizeb = SlotSizeb + d; // ��������� ����
        SlotSizee = SlotSizee - d; // ��������� ����
    }
    else if ((SlotSizee == 0) && (d > 0))
    {
        cout << endl << "��� ����� ���������" << endl;
        Slotb = 1;
    }
    else if ((SlotSizee == (Slotquant * SlotSize)) && (d < 0))
    {
        cout << endl << "��� ����� ������" << endl;
        Slote = 1;
    }

}

void VendingMachine::displayWend()
{
    cout << "������ �����: " << SlotSize << endl;
    cout << "���������� ������: " << Slotquant << endl;
    cout << "����� ������: " << Slotquant * SlotSize << endl;
    cout << "������ �����������: " << SlotSizeb << endl;
    cout << "������ ������: " << SlotSizee << endl;
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