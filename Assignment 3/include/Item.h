#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Machine.h"

using namespace std;

class Item : public Machine
{
    public:
        Item();
        void select_item(int item_index, int item_num);
        void dispatches_the_item(int index);

    protected:

    private:
};

#endif // ITEM_H
