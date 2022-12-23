#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   void f(int, float); // fonction I
   void f(float, int); // fonction II
   
   int i = 1;
   char c = 'A';
   float x = 2.f;
   double y = 3.0;
   
//   f(i, c);
//    f(c, i);
//    f(i, i);
      f(x, c);
      f(c, x);
//    f(x, x);
      f(i, y);
      f(y, i);
//    f(y, y);
      
   return EXIT_SUCCESS;
}

void f(int n, float x) {
   cout << "fonction I" << endl;
}

void f(float x, int n) {
   cout << "fonction II" << endl;
}
