#pragma once
#include <iostream>
using namespace std;

struct Snack
{
    string SnackName;
    int Snackquant;

    void initSnack(string name1, int quant);

    void setSize(long size);

    void displaySnack();

};
class VendingMachine
{
public:
    bool Slotb;
    bool Slote;

    void setSize(short size);

    void setquant(short size);

    void initVending(short ssize, short squant);

    void setSlotSizee();

    void sls(short d);

    void displayWend();

private:
    short SlotSize;
    short Slotquant;
    short Slotqbus;
    short SlotSizeb;
    short SlotSizee;
};
