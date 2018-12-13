#include <iostream>
#include "Price.h"

using namespace std;

Price::Price()
{
    prices_struct.cola_price = 7.5;
    prices_struct.pepsi_price = 5.0;
    prices_struct.sprite_price = 10.5;
    prices_struct.redbull_price = 20.0;
    prices_struct.moro_price = 6.0;
    prices_struct.kitkat_price = 8.0;
    prices_struct.galaxy_price = 4.5;
    prices_struct.trident_price = 2.0;
    prices_struct.mimex_price = 0.5;
    prices_struct.brunch_price = 3.0;
}

//---------->> Get the money from the user <<----------

void Price::set_money(double user_money)
{
    this->user_money = user_money;
    split_money(user_money);
}

//---------->> Return the user_money variable <<----------

double Price::get_money()
{
    return user_money;
}

//---------->> Calculate the bill <<----------

double Price::dispatches_the_item_Price(int index)
{


    switch (index)
    {
    case 1 :
        {
            return prices_struct.cola_price;
            break;
        }
    case 2 :
        {
            return prices_struct.pepsi_price;
            break;
        }
    case 3 :
        {
            return prices_struct.sprite_price;
            break;
        }
    case 4 :
        {
        return prices_struct.redbull_price;
        break;
        }
    case 5 :
        {
            return prices_struct.moro_price;
            break;
        }
    case 6 :
        {
            return prices_struct.kitkat_price;
            break;
        }
    case 7 :
        {
            return prices_struct.galaxy_price;
            break;
        }
    case 8 :
        {
            return prices_struct.trident_price;
            break;
        }
    case 9 :
        {
            return prices_struct.mimex_price;
            break;
        }
    case 10 :
        {
            return prices_struct.brunch_price;
            break;
        }
    default :
        return 0;
    }
}

double Price::the_bill(int num, double item_price)
{
    user_bill = num * item_price;
    return user_bill;
}

//---------->> Calculate the rest of the money <<----------

void Price::the_rest(double user_money, double user_bill)
{
    if(user_money > user_bill)
    {
         user_rest = user_money - user_bill;
        //cout<<"llll"<<user_rest <<endl ;
    }


    else if(user_money == user_bill)
    {
                user_rest = 0;
            cout<<"The rest = 0 "<<endl ;
    }

    double temp = user_rest;
    temp = temp - int(user_rest);


    while(user_rest)       //here I used the machine user_money variable not this function user_money variable
                            //How can I use pointer to make machine user_money variable change automatically.
    {
        if(user_rest >= 20)
        {
            cout << int(user_rest/20) << " of type 20-bill" << endl;

            user_rest = int(user_rest)%20;
            //cout<< "user_rest =  " <<user_rest <<endl ;
        }
        else if(user_rest >= 10)
        {
            cout << int(user_rest/10) << " of type 10-bill" << endl;
            user_rest = int(user_rest)%10;
              //          cout<< "user_rest =  " <<user_rest <<endl ;

        }
        else if(user_rest >= 5)
        {
            cout << int(user_rest/5) << " of type 5-bill" << endl;
            user_rest = int(user_rest)%5;
                //        cout<< "user_rest =  " <<user_rest <<endl ;

        }
        else if(user_rest >= 1)
        {
            cout << int(user_rest) << " of type 1-coin" << endl;
            user_rest = int(user_rest)%1;
            //cout<< "user_rest =  " <<user_rest <<endl ;
            user_rest = 0.5 ;
            //cout<<"temp"<<temp<<endl ;
        }

        else
        {
            cout << "1 of type 0.5-coin" << endl;
            //cout<< "user_rest =  " << 0.5 <<endl ;
            user_rest-=0.5 ;

        }
    }

   // machine_bank -= user_rest;
    //return user_rest;
}

//----------Split the money in terms of 20, 10, 5, 1, 0.5 Dollar coins and bills----------

void Price::split_money(double user_money)
{
    while(user_money)       //here I used the machine user_money variable not this function user_money variable
                            //How can I use pointer to make machine user_money variable change automatically.
    {
        if(user_money >= 20)
        {
            dollars_struct.bills_of_type_20_dollar += int(user_money/20);
            user_money = int(user_money)%20;
        }
        else if(user_money >= 10)
        {

            dollars_struct.bills_of_type_10_dollar += int(user_money/10);
            user_money = int(user_money)%10;
        }
        else if(user_money >= 5)
        {
            dollars_struct.bills_of_type_5_dollar += int(user_money/5);
            user_money = int(user_money)%5;
        }
        else if(user_money >= 1)
        {

            dollars_struct.one_dollar_coin += int(user_money);
            user_money = int(user_money)%1;
        }
        else
        {
            dollars_struct.half_dollar_coin += user_money;
            user_money =0;
        }
    }
}
