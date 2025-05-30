#include <iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void Sum(int SumReal,int SumImag)
{
    real=SumReal;
    Imag=SumImag;
}
void Display()
{
    cout<<real<<'+'<<imag<<'i';
}
};
int main(){
    int real1,real2,imag1,imag2;
    cout<<"Enter 1st Complex no."<<" ";
    cin>>real1>>imag1;
    cout<<"Enter 2nd Complex no."<<" ";
    cin>>real2>>imag2;
    Complex c1(real1,imag2);
    Complex c2(real2,imag2);
    Complex c;
    c.Sum(c1.real+c2.real,c2.imag+c2.imag);
    c.Display();  
return 0;
}