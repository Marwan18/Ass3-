#include <iostream>
#include "Item.h"

using namespace std;

Item::Item()
{
    item_num = 0;
}


void Item::select_item(int item_index, int item_num)
{
    this->item_index = item_index;
    this->item_num = item_num;


    switch(item_index)
    {
    case 1 :
        if(items_struct.cola == 0)
        {
            cout << "Cola runs out" << endl;
        }

        items_struct.cola -= item_num;

    case 2 :
        if(items_struct.pepsi == 0)
        {
            cout << "pepsi runs out" << endl;
        }
        items_struct.pepsi-= item_num;

    case 3 :
        if(items_struct.sprite == 0)
        {
            cout << "sprite runs out" << endl;
        }
        items_struct.sprite-= item_num;

    case 4 :
        if(items_struct.redbull == 0)
        {
            cout << "redbull runs out" << endl;
        }
        items_struct.redbull-= item_num;

    case 5 :
        if(items_struct.moro == 0)
        {
            cout << "moro runs out" << endl;
        }
        items_struct.moro-= item_num;

    case 6 :
        if(items_struct.kitkat == 0)
        {
            cout << "kitkat runs out" << endl;
        }
        items_struct.kitkat-= item_num;

    case 7 :
        if(items_struct.galaxy == 0)
        {
            cout << "galaxy runs out" << endl;
        }
        items_struct.galaxy-= item_num;

    case 8 :
        if(items_struct.trident == 0)
        {
            cout << "trident runs out" << endl;
        }
        items_struct.trident-= item_num;

    case 9 :
        if(items_struct.mimex == 0)
        {
            cout << "mimex runs out" << endl;
        }
        items_struct.mimex-= item_num;

    case 10 :
        if(items_struct.brunch == 0)
        {
            cout << "brunch runs out" << endl;
        }
        items_struct.brunch-= item_num;
    }
}

void Item::dispatches_the_item(int index)
{
    item_index = index;

    switch(item_index)
    {
    case 1 :
        cout << "Take your Cola\n" << endl;
        break;
    case 2 :
        cout << "Take your Pepsi\n" << endl;
        break;
    case 3 :
        cout << "Take your Sprite\n" << endl;
        break;
    case 4 :
        cout << "Take your Redbull\n" << endl;
        break;
    case 5 :
        cout << "Take your Moro\n" << endl;
        break;
    case 6 :
        cout << "Take your Kitkat\n" << endl;
        break;
    case 7 :
        cout << "Take your Galaxy\n" << endl;
        break;
    case 8 :
        cout << "Take your Trident\n" << endl;
        break;
    case 9 :
        cout << "Take your Mimex\n" << endl;
        break;
    case 10 :
        cout << "Take your Brunch\n" << endl;
        break;
    }

}






