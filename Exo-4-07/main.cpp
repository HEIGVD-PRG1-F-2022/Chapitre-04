#include <cstdlib>
#include <iostream>
using namespace std;

void mystere(int& a, int& b);

int main() {

   int x = 3,
       y = 4;
   
   cout << "x = " << x << " " << "y = " << y << endl;     
   mystere(x, y);
   cout << "x = " << x << " " << "y = " << y << endl;     
   
   return EXIT_SUCCESS;
}

void mystere(int& a, int& b) {
   a = a - b;
   b = b + a;
   a = b - a;
}

// x = 3 y = 4
// x = 4 y = 3
