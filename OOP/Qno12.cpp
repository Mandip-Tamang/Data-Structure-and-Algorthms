#include <iostream>
using namespace std;
class Account{
    private:
    string acHolderName;
    double balance;
    public:
    int minBalance;
  void Create_account(string name,int minbalance){
    acHolderName=name;
    balance=minbalance;
  }
   void DisplayInfo()
   {
    cout<<"Account holder name:"<<acHolderName<<endl;
    cout<<"Amount deposited:"<<balance<<endl;
   }
};
int main(){
    Account a1;
    a1.Create_account("mandip",3000);
    a1.DisplayInfo();
return 0;
}