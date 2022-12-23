#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

   void f(char);  // fonction I
   void f(int);   // fonction II
   void f(float); // fonction III
   
   bool b = true;
   char c = 'A';
   short s = 1;
   int i = 2;
   float x = 3.f;
   double y = 4.0;
   
   f(b);
   f(c);
   f(s);
   f(i);
   f(x);
//    f(y);
   
   system("PAUSE");
   return EXIT_SUCCESS;
}

void f (char c) {
   cout << "fonction I" << endl;
}

void f (int i) {
   cout << "fonction II" << endl;
}

void f (float f) {
   cout << "fonction III" << endl;
}

// #include <cstdlib>
// #include <iostream>
// using namespace std;
// 
// int main() {
// 
//    void f(int);    // fonction I
//    void f(double); // fonction II
//    
//    float x = 1.0f;
//    
//    f(x);
//    
//    system("PAUSE");
//    return EXIT_SUCCESS;
// }
// 
// void f(int i) {
//    cout << "fonction I" << endl;
// }
// 
// void f(double y) {
//    cout << "fonction II" << endl;
// }
