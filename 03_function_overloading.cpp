#include <iostream>
using namespace std;
int area(int a, int b)
{
  cout << "Function one" << endl;
  return a * b;
}
int area(int side)
{
  cout << "Function two" << endl;
  return side * side;
}
float area(double radius)
{
  cout << "Function three" << endl;
  return (radius * radius * 3.142);
}
int main()
{
  // cout << "The area of the square with side length 2 is " << area(2) << endl;
  // cout << "The area of circle with radius 3.6 is " << area(3.6) << endl;
  // cout << "The area of rectangle with side length 2 and height 3 is "
  //      << area(2, 3) << endl;

  cout << area(1) << endl;
  cout << area(1.00) << endl;
  cout << area(1, 1.2) << endl;
  cout << area('c');
}