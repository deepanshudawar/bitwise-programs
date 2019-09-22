#include<iostream>
using namespace std;

template <class T>
void swap_elements (T & a, T & b) {
   
 a=a^b;
 b=b^a;
 a=a^b;
}

int main () {
//change the datatype to value type that you want to swap
  char a,b;
  cin>>a>>b;
  swap_elements(a,b);

  cout << a << " ";
  cout << b;
  return 0;
}
