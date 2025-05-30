
// Example 3: Pointer to Object Concept (Item with Code and Price)
#include <iostream>
using namespace std;
class Item {
    int code;
    float price;
public:
    void getdata() {
        cout << "Enter Item Code and Price: ";
        cin >> code >> price;
    }
    void display() {
        cout << "Item Code: " << code << ", Price: " << price << endl;
    }
};

int main() {
    Item *ptr = new Item; // Dynamically allocating object
    ptr->getdata();
    ptr->display();
    delete ptr; // Freeing memory
    return 0;
}

