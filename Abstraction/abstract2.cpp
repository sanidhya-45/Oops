#include <iostream>
using namespace std; 

class PencilBox{
    public:
        virtual void pen()=0;
        void general();
        
    protected:
        virtual void ruler()=0;
};

class student1: public PencilBox{
    public:
        void pen()
        {
            cout<<"Student 1 has a pen in his pencil box"<<endl;
        }
        void ruler()
        {
            cout<<"Student 1 has a ruler in his pencil box"<<endl;
        } 
        void general()
        { cout<<"Just to check something"<<endl;}

};
class student2 : public PencilBox{
    public:
        void ruler()
        {
            cout<<"Student 2 has a ruler in his pencil box"<<endl;
        }  
        void pen()
        {
            cout<<"Student 2 has a pen in his pencil box"<<endl;
        }
};
int main() {

    // PencilBox *p=new PencilBox();
    // cannot be instantiated because it has a virtual method in it

    student1 *s1= new student1();
    s1->pen();
    s1->general();
    student2 *s2= new student2();
    s2->pen();
    s2->ruler();


return 0;
}