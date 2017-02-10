#ifndef __week8__Item__
#define __week8__Item__

#include <string>

class Item {

private:
    std::string name;
    double price;
    int quantity;
    


public:
    
    Item();
    Item(std::string n, double p, int q);
    
    
    double getPrice();
    void setPrice(double thePrice);

    std::string getName();
    void setName(std::string str);

    int getQuantity();
    void setQuantity(int qty);

};






#endif /* defined(__week8__Item__) */

