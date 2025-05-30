#include <iostream>
using namespace std;
void addDistanceByValue(int feet1, int inches1, int feet2, int inches2, int &resultFeet, int &resultInches) {
    resultInches = inches1 + inches2;
    resultFeet = feet1 + feet2 + resultInches / 12; // Convert excess inches to feet
    resultInches %= 12; // Keep inches less than 12
}

// Function to add distances using pass by reference
void addDistanceByReference(int &feet1, int &inches1, int &feet2, int &inches2) {
    inches1 += inches2;
    feet1 += feet2 + inches1 / 12; // Convert excess inches to feet
    inches1 %= 12; // Keep inches less than 12
}

// Function to add distances using pass by pointer
void addDistanceByPointer(int *feet1, int *inches1, int *feet2, int *inches2) {
    *inches1 += *inches2;
    *feet1 += *feet2 + *inches1 / 12; // Convert excess inches to feet
    *inches1 %= 12; // Keep inches less than 12
}
int main() {
    int feet1 = 5, inches1 = 9;
    int feet2 = 4, inches2 = 11;

    // Using pass by value
    int resultFeet1, resultInches1;
    addDistanceByValue(feet1, inches1, feet2, inches2, resultFeet1, resultInches1);
    cout << "Result (by value): " << resultFeet1 << " feet " << resultInches1 << " inches" << endl;

    // Using pass by reference
    addDistanceByReference(feet1, inches1, feet2, inches2);
    cout << "Result (by reference): " << feet1 << " feet " << inches1 << " inches" << endl;

    // Using pass by pointer
    addDistanceByPointer(&feet1, &inches1, &feet2, &inches2);
    cout << "Result (by pointer): " << feet1 << " feet " << inches1 << " inches" << endl;

    return 0;
}

// Function to add distances using pass by value

