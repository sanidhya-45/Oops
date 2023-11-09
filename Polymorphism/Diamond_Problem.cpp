#include <iostream>
using namespace std; 

class Car{
    // consists of only methods
    public:
    Car(){ cout<<"Hello Car"<<endl;}
    void wheel()
    {
        cout<<"Base class wheel"<<endl;
    }

    void engine()
    {
        cout<<"Base class engine"<<endl;
    }

    void seats()
    {
        cout<<"Base class seats"<<endl;
    }

};
class Maruti: virtual public Car{
    public:
    Maruti(){ cout<<"Hello, Maruti"<<endl;}
    void wheel()
    {
        cout<<"Maruti class wheel"<<endl;
    }

    void engine()
    {
        cout<<"Maruti class engine"<<endl;
    }

    void seats()
    {
        cout<<" 4 seats"<<endl;
    }
};
class Renault: virtual public Car{
    public:
    Renault(){ cout<<" Hello, Renault"<<endl;}
    void wheel()
    {
        cout<<"Renault class wheel"<<endl;
    }

    void engine()
    {
        cout<<"Renault class engine"<<endl;
    }

    void seats()
    {
        cout<<" 6 seats"<<endl;
    }
};
class MixDesign: public Maruti, public Renault{
    public:
    MixDesign()
    {
        cout<<"Hello md"<<endl;
    }
    void wheel()
    {
        cout<<"Maruti class wheel"<<endl;
    }

    void engine()
    {
        cout<<"Renault class engine"<<endl;
    }

    void seats()
    {
        cout<<" 8 seats"<<endl;
    }
};
int main() {
    // Maruti *m= new Maruti();
    // Renault *r = new Renault();
    // on running this base class car is called twice, which is where the confusion arises
    // to avoid this we make classes Maruti and Renault as virtual
    // Methods also can be made virtual

    MixDesign *md= new MixDesign();

return 0;
}