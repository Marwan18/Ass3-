#include <iostream>
#include "Machine.h"

Machine::Machine()
{
    //Default amount of items.
    items_struct.cola = 10;
    items_struct.pepsi = 10;
    items_struct.sprite = 10;
    items_struct.redbull = 10;
    items_struct.moro = 10;
    items_struct.kitkat = 10;
    items_struct.galaxy = 10;
    items_struct.trident = 10;
    items_struct.mimex = 10;
    items_struct.brunch = 10;

    //Initializing machine moneyBox.
    dollars_struct.half_dollar_coin = 100;
    dollars_struct.one_dollar_coin = 50;
    dollars_struct.bills_of_type_5_dollar = 40;     //200 Dollars
    dollars_struct.bills_of_type_10_dollar = 40;    //400 Dollars
    dollars_struct.bills_of_type_20_dollar = 40;    //800 Dollars
}

void Machine::runs_out()
{
    cout << "Machine runes out " << endl;
}
/*
void Machine::set_item_index(int item_index)
{
    this->item_index = item_index;
}

void Machine::set_item_num(int item_num)
{
    this->item_num = item_num;
}
*/

//---------->> Getters <<----------
int Machine::get_item_index()
{
    return item_index;
}

int Machine::get_item_num()
{
    return item_num;
}

int Machine::get_cola()
{
    return items_struct.cola;
}
int Machine::get_pepsi()
{
    return items_struct.pepsi;
}

int Machine::get_sprite()
{
    return items_struct.sprite;
}

int Machine::get_redbull()
{
    return items_struct.redbull;
}

int Machine::get_moro()
{
    return items_struct.moro;
}

int Machine::get_kitkat()
{
    return items_struct.kitkat;
}

int Machine::get_galaxy()
{
    return items_struct.galaxy;
}

int Machine::get_trident()
{
    return items_struct.trident;
}

int Machine::get_mimex()
{
    return items_struct.mimex;
}
int Machine::get_brunch()
{
    return items_struct.brunch;
}
