#include <iostream>
using namespace std;

// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y) { return (x > y) ? x : y; }

// identifier is the name of the struct
// here the identifier is Temp
// when Temp struct is created(defined) like other native data types, no memory
// is allocated note that we need to end the declaration with a semicolon (;)
struct Temp {
  int i;
  float f;
};

int main(void) {
  cout << "The bigger one is " << myMax<int>(3, 7)
       << endl; // Call myMax for int
  cout << "The bigger one is " << myMax<double>(3.0, 7.0)
       << endl; // call myMax for double
  cout << "The bigger one is " << myMax<char>('g', 'e')
       << endl; // call myMax for char

  int arrLen = 10, i;
  int arr[arrLen];

  cout << "Size of the integer in this compiler is " << sizeof(int)
       << " bypes \n";

  for (i = 0; i < 5; i++) {
    cout << "Address arr[" << i << "] is " << &arr[i] << "\n";
  }

  // 1, name of that memory block      x
  // 2, content of that memory block   0
  // 3, address of that memory block   &x or point1

  int x = 0;
  // * means dereference to get the value at this position
  // & means reference to get the position of this variable
  int *point1 = &x;

  cout << "point1 is " << point1 << "\n";
  cout << "value at point1 is " << *point1 << "\n";

  // bcz x is just the name of the memory block
  // so y has the same value as x
  // passed by value
  int y = x;
  cout << "y is " << y << "\n";
  x = 1;
  cout << "y is " << y << "\n";

  Temp *point3;

  cout << "temp is located at " << point3 << "\n";

  return 0;
}