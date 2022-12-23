#include <cstdlib>
#include <iostream>
using namespace std;

void afficher();

int main() {
   for (int i = 1; i <= 3; i++)
      afficher();
      
   return EXIT_SUCCESS;
}

void afficher() {
   static int compteur; // initialisation à 0 inutile car faite par défaut
   cout << "Appel no " << ++compteur << endl;
}
