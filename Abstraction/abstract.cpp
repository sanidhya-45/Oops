#include <bits/stdc++.h>
using namespace std;

// this is a base class
class Shape {
    public:
        int w,h,v;
        Shape() {cout<<"Shape class"<<endl;}
        virtual int area()=0;
        virtual int volume()=0;
};

// this is a derived class
class Rectangle : public Shape {
    public:
    Rectangle(){ cout<<"rectangle class"<<endl;}
    Rectangle(int a, int b, int c){ w=a; h=b;v=c;}
    
    int volume()
    {
        return w*h*v;
    }
    int area()
    {
        return w*h;
    }    

};

// this is a derived class
class Cube : public Shape {
    public:
    Cube(){ cout<<"cube class"<<endl;}
    Cube(int a, int b, int c){ w=a; h=b;v=c;}
    int area()
    {
        return v*v;
    }
    int volume()
    {
        return v*v*v;
    }    

};


int main()
{
//    Shape *s1= new Shape(3,4);
//    Shape *s2= new Shape(12);

//   above two not possible as Shape contains abstract functions
    Cube *c= new Cube(1,2,3);
    Rectangle *r= new Rectangle(4,5,6);
    // until the derived class does not overrides all the virtal functions of base class, their object cant be created
    cout<<c->area()<<endl;
    cout<<c->volume()<<endl;
    cout<<r->area()<<endl;
    cout<<r->volume()<<endl;
}