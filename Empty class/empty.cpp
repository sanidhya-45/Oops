#include <iostream>
using namespace std; 

class Empty{};
int main() {
    Empty e;
    cout<<sizeof(e)<<endl;
    //1

    Empty *e1= new Empty();
    cout<<sizeof(e1);
    //4
    
return 0;
}
// The output is 1 for the first sizeof(e) because an empty class in C++ 
// has a size of at least 1 byte to ensure that distinct objects of the class 
// have distinct addresses. This is due to the C++ standard requiring that objects of 
// different types must have different addresses.

// The output is 4 for the second sizeof(e1) because e1 is a pointer to an object of class Empty, 
// and on many systems, a pointer typically takes up 4 bytes (32-bit systems) or 8 bytes (64-bit systems). 
// The size of the pointer is not the size of the object it points to; it's 
// the size required to store the memory address of the object.




