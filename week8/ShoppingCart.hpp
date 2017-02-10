#ifndef __week8__ShoppingCart__
#define __week8__ShoppingCart__

#include "item.h"


class ShoppingCart {


private:
    Item *array[100];
    int arrayEnd;
    
    
public:
    ShoppingCart();

    void addItem(Item *item);
    
    double totalPrice();
    
    





};

















#endif /* defined(__week8__ShoppingCart__) */
