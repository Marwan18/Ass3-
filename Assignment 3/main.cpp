#include <iostream>
#include "Machine.h"
#include "Item.h"
#include "Price.h"

using namespace std;


int main()
{
    //---------->> Declaration area <<----------
    int num, index;
    double user_money;

    Machine machine_obj;
    Item item_obj;
    Price price_obj;

    //Available items.
    cout << "Machine has the following items: " << endl;
    cout << "1-Cola" << endl << "2-Pepsi" << endl << "3-Sprite" << endl << "4-Redbull" << endl << "5-Moro" << endl;
    cout << "6-Kitkat" << endl << "7-Galaxy" << endl << "8-trident" << endl << "9-Mimex" << endl << "10-Brunch" << endl;

    cout << endl << "----------------*_*-------------------" << endl << endl;

    //Get the money from the user.
    cout << "Enter the money\n";
    cin >> user_money;
    price_obj.set_money(user_money);

    //let the user select the item and the the number of this item he wants.
    cout << "choose the item\n";
    cin >> index;
    cout << "Enter the number of this item you want\n";
    cin >> num;
    cout << endl;
    item_obj.select_item(index, num);

    //Dispatches the item and the rest.

    item_obj.dispatches_the_item(item_obj.get_item_index());
     double the_bill  = price_obj.the_bill(num, price_obj.dispatches_the_item_Price(index)) ;
    cout << price_obj.the_bill(num, price_obj.dispatches_the_item_Price(index)) << endl;
    price_obj.the_rest(user_money ,the_bill )  ;
    //cout << price_obj.the_rest(price_obj.get_money(), ) << endl;

//    machine_obj.set_item_index(index);
//    machine_obj.set_item_num(num);



//    item_obj.select_item(index, num);
//
//    cout << i_obj.get_cola() << endl;

//    cout << "the rest = " << the_rest(item_price()) << endl;


    return 0;
}
