#include <bits/stdc++.h>
using namespace std;

// this is a base class
class Father{
    public:
        Father()
        {
            cout<<"I am father"<<endl;
        }
        void protector()
        {
            cout<<"protect my family"<<endl;
        }
        void motivation()
        {
            cout<<"be brave and stay motivated"<<endl;
        }
    
};
//this is another base class
class Mother{
    public:
    Mother()
    {
        cout<<"I am Mother"<<endl;
    }
    void eq()
    {
        cout<<"got eq from mom"<<endl;
    }
    void kindness()
    {
        cout<<"got kindness from mom"<<endl;
    }
    
};

// this is a derived class child deriving from both father and mother
class child : public Father, public Mother{ // the order in which classes are inherited is the order of calling of constructors
   public:
    child()
    {
        cout<<"I am child of father and mother"<<endl;
    }
    void fun()
    {
        cout<<" I love to have fun"<<endl;
    }
};


int main()
{
    child *cd= new child();
    cd->eq();
    cd->motivation();
    cd->kindness();
    cd->protector();


}