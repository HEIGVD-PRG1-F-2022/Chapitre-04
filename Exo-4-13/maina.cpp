#include <cstdlib>
#include <iostream>
using namespace std;

static int compteur; // initialisation à 0 inutile car faite par défaut

void afficher();

int main() {
   for (int i = 1; i <= 3; i++)
      afficher();
      
   return EXIT_SUCCESS;
}

void afficher() {
   cout << "Appel no " << ++compteur << endl;
}
