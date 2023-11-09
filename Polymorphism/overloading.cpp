#include <iostream>
using namespace std; 

class calculations{
    private:
    
    public:
    calculations()
    {
        cout<<"Just to check something"<<endl;
    }
    int add(int n, int m, int p){ return n+m+p; }  
    int add(int n, int m){ return n+m;}
    int mul(int n, int m){ return n*m;}
    int sub(int n, int m){
        if(n<m) return m-n;
        return n-m;
    }
    float div(float n, float m)
        {
            if(m>0) return n/m;
            else{
                cout<<"Error"<<endl;
                return 0;
            }
        }
    ~calculations()
    {
        cout<<"After I am gone, everything is gone!"<<endl;
    }

};
int main() {

    calculations c;
    cout<<c.add(2,3)<<endl;
    cout<<c.div(2,3)<<endl;
    cout<<c.sub(2,3)<<endl;
    cout<<c.mul(2,3)<<endl;
    cout<<c.div(2,0)<<endl;
    c.add(2,0,8);
    
    
return 0;
}