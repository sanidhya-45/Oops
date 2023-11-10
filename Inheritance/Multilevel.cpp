#include <iostream>
using namespace std; 

// this code helps to understand multilevel inheritance and working of default and parametrized constructor
class Base{
    public:
        Base(){ cout<<"This is base "<<endl;}
        Base(int n)
        {
            cout<<"In Base "<<n*100<<endl;
        }
        Base(int n, int m)
        {
            cout<<"In Base "<<n*m*100<<endl;
        }
        
};
class Derived1 : public Base{
    public:
        Derived1(){ cout<<"This is dErived 1"<<endl;}
        Derived1(int n) : Base(n)
        {
            cout<<"In derived 1 "<<n*10<<endl;
        }
        Derived1(int n, int m) : Base(n,m)
        {
            cout<<"In derived 1 "<<n*m*10<<endl;
        }
        
};

class Derived2 : public Derived1{
    public:
        Derived2(){ cout<<"This is Derived 2"<<endl;}
        Derived2(int n) :Derived1(n)
        {
            cout<<"In derived 2 "<<n<<endl;
        }
        Derived2(int n, int m) :Derived1(n, m)
        {
            cout<<"In derived 2 "<<n*m<<endl;
        }

};

int main() 
{
    Derived2 *d1 = new Derived2();
    Derived2 *d2 = new Derived2(2);
    Derived2 *d3 = new Derived2(2,5);

return 0;
}