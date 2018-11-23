// preprocessor directive
#include <iostream>

// avoid repeatedly use std::
using namespace std;

// declare a function first
void jaehong ();

int main (){
  // invoke the function
  jaehong();
}

// define the function declared before
void jaehong(){ // void function doesn't have a return value
  /*
  - division within int will result in int,
    int / int = int

  - but you can explicitly convert into float
  by using (float)
    (float) int / int = float

  - at least one of the is float, then the result would be float
    int / float = float
    int / float = float
    float / float = float  */

  cout << "Input: 9 / 5 = " << " " << 9 / 5 << endl;
  cout << "Input: 9.0 / 5.0 = " << " " << 9.0 / 5.0 << endl;
  cout << "Input: 9.0 / 5 = " << " " << 9.0 / 5 << endl;
  cout << "Input: 9 / 5.0 = " << " " << 9 / 5.0 << endl;
  cout << "Input: 9 / 5 = (float)" << " " << (float)9 / 5 << endl;
}
