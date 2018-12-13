#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <string>

using namespace std;

class Machine
{
    public:
        Machine();
        void runs_out();

        //Setters
//        void set_item_index(int item_index);
//        void set_item_num(int item_num);

        //Getter
        int get_item_index();
        int get_item_num();

        int get_cola();
        int get_pepsi();
        int get_sprite();
        int get_redbull();
        int get_moro();
        int get_kitkat();
        int get_galaxy();
        int get_trident();
        int get_mimex();
        int get_brunch();

    protected:

        //Machine MoneyBox.
        struct Dollars
        {
            double half_dollar_coin;
            int one_dollar_coin;
            int bills_of_type_5_dollar;
            int bills_of_type_10_dollar;
            int bills_of_type_20_dollar;
        };
        Dollars dollars_struct;

        //Default items
        struct Items
        {
            int cola;
            int pepsi;
            int sprite;
            int redbull;
            int moro;
            int kitkat;
            int galaxy;
            int trident;
            int mimex;
            int brunch;
        };
        Items items_struct;

        int item_index;
        int item_num;
};

#endif // MACHINE_H
