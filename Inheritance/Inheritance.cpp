#include <bits/stdc++.h>
using namespace std;

// this is a base class
class Animal{
    
    friend class cat;
    private:
        int legs;
        string sound;
    public:
        Animal()
        {
            cout<<" Hello I am Animal class"<<endl;
        }
        Animal(int number_of_legs, string sound)
        {
            legs= number_of_legs;
            this->sound= sound;
        }
        void move()
        {
            cout<<"this animal is moving and has "<<legs<<" legs"<<endl;
        }
        void makesound()
        {
            cout<<"This animal is making "<<sound<<" sound"<<endl;
        }
};

// this is a derived class
class cat : public Animal{
    public:
        cat(int number_of_legs, string sound )
        {
            legs=number_of_legs;
            this->sound= sound;
        }
        void move()
        {
            cout<<"this animal is moving and has "<<legs<<" legs"<<endl;
        }
        void makesound()
        {
            cout<<"This animal is making "<<sound<<" sound"<<endl;
        }

};


int main()
{
    // this is normal creation of objects
    Animal dog(4, "bark");
    dog.move();
    dog.makesound();

    Animal *cow= new Animal(4, "moo");
    cow->move();
    cow->makesound();
    // when you are allocating dynamic memory (using new keyword) that time we use the arrow ( -> )symbol 
    // otherwise the dot ( . )symbol 

    cat c(4, "meow");
    c.move();
    c.makesound();
    // to be able to access private members of base class from derived class we can use 
    // keyword friend and make both the calsses as friends

}