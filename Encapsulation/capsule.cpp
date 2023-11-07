#include <iostream>
using namespace std;

// this program demonstrates data hiding and data binding in encapsulation
class Rectangle {
   private:
    // data hiding
    // Variables required for area calculation
    int length;
    int breadth;

   public:
    int height;
    // Setter function for length
    void setLength(int len) {
      length = len;
    }

    // Setter function for breadth
    void setBreadth(int brth) {
      breadth = brth;
    }

    // Getter function for length
    int getLength() {
      return length;
    }

    // Getter function for breadth
    int getBreadth() {
      return breadth;
    }
    // Function to calculate area
    int getArea() {
      return length * breadth;
    }
    float volume(float n)
    {
        height=n;
        return length*breadth*height;
    }
};

int main() {
  // Create object of Rectangle class
  Rectangle rectangle1;

  // Initialize length using Setter function
  rectangle1.setLength(8);

  // Initialize breadth using Setter function
  rectangle1.setBreadth(6);

  // Access length using Getter function
  cout << "Length = " << rectangle1.getLength() << endl;

  // Access breadth using Getter function
  cout << "Breadth = " << rectangle1.getBreadth() << endl;

  // Call getArea() function
  cout << "Area = " << rectangle1.getArea()<<endl;

  // Call for volume
  cout << "Volume = " << rectangle1.volume(3.4);
  return 0;
}