#include <cstdlib>
#include <iostream>
#include <limits>
using namespace std;

bool listerCaracteres(unsigned char c1, unsigned char c2);

int main() {

   cout << "Test 1" << endl;
   listerCaracteres('A', 'A');

   cout << "Test 2" << endl;
   listerCaracteres('A', 'B');

   cout << "Test 3" << endl;
   listerCaracteres('B', 'A');

   cout << "Test 4" << endl;
   listerCaracteres('0', '9');

   cout << "Test 5" << endl;
   listerCaracteres(65, 66);

   cout << "Test 6" << endl;
   unsigned char c1 = numeric_limits<unsigned char>::max() - 1,
                 c2 = numeric_limits<unsigned char>::max();   
   listerCaracteres(c1, c2);

   cout << "Test 7" << endl;
   listerCaracteres('\x93', '\x9B'); // du caract 147 au caract 155
   
   cout << "Fin des tests" << endl;

   system("PAUSE");      
   return EXIT_SUCCESS;
}

bool listerCaracteres(unsigned char c1, unsigned char c2) {
   if (c1 >= c2) {
      return false;
   } else {   
      const unsigned NB_CHAR = c2 - c1 + 1;
      for (unsigned i = 0; i < NB_CHAR; ++i)
         cout << (unsigned char)(c1 + i);
      cout << endl;   
      return true;
   }
}

// Autre variante possible (mais moins bonne)
// bool listerCaracteres(unsigned char c1, unsigned char c2) {
//    if (c1 >= c2) {
//       return false;
//    } else {   
//       for (unsigned char c = c1; c <= c2; ++c) {
//          cout << c;
//          if (c == numeric_limits<unsigned char>::max()) break;
//       } 
//       cout << endl;   
//       return true;
//    }
// }

// A NE PAS FAIRE CAR FAUX
// bool listerCaracteres(unsigned char c1, unsigned char c2) {
//    if (c1 >= c2) {
//       return false;
//    } else {   
//       for (unsigned char c = c1; c <= c2; ++c) {
//          cout << c;
//       }   
//       cout << endl;   
//       return true;
//    }
// }
