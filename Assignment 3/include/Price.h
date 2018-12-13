#ifndef PRICE_H
#define PRICE_H

#include <iostream>
#include "Machine.h"
 struct Prices
        {
            double cola_price;
            double pepsi_price;
            double sprite_price;
            double redbull_price;
            double moro_price;
            double kitkat_price;
            double galaxy_price;
            double trident_price;
            double mimex_price;
            double brunch_price;
        };

class Price : public Machine
{
    public:
        Price();

        void set_money(double user_money);
        double get_money();
        double dispatches_the_item_Price(int index);

        double the_bill(int num, double item_price);
        void the_rest(double user_money, double the_bill);
        void split_money(double user_money);

    protected:

    private:
        double user_money;
        double user_bill;
        double user_rest;

        Prices prices_struct;
};


#endif // PRICE_H
