#include <cstdlib>
#include <iostream>
using namespace std;

void permutationCirculaireDroite(double& x, double& y, double& z);
void afficher(double x, double y, double z);

int main() {

   double x = 1,
          y = 2,
          z = 3;
   
   for (int i = 1; i <= 3; ++i) {
      permutationCirculaireDroite(x, y, z);
      afficher(x, y, z);
   }
      
   return EXIT_SUCCESS;
}

void permutationCirculaireDroite(double& x, double& y, double& z) {
   double tmp = z;
   z = y;
   y = x;
   x = tmp;
}

void afficher(double x, double y, double z) {
   cout << "x = " << x << "  y = " << y << "  z = " << z << endl;
}

// x = 3  y = 1  z = 2
// x = 2  y = 3  z = 1
// x = 1  y = 2  z = 3
