// Example 1: Rupee to Paisa Conversion
 #include <iostream>
 using namespace std;
class Rupee {
    int rupees;
public:
    void getdata() {
        cout << "Enter Rupees: ";
        cin >> rupees;
    }
    void convert() {
        int paisa = rupees * 100;
        cout << rupees << " Rupees = " << paisa << " Paisa" << endl;
    }
};

int main() {
    Rupee r;
    r.getdata();
    r.convert();
    return 0;
}

