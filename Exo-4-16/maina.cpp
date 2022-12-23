#include <cstdlib>
#include <iostream>
using namespace std;

unsigned lireEntier(unsigned a, unsigned b);

// Calcule la suite de Syracuse du nombre n
// Renvoie en valeur de retour le nombre d'itérations nécessaires
// Affiche les diverses valeurs de la suite si avecAffichage vaut true;
// ne les affiche pas, sinon
unsigned suiteDeSyracuse(unsigned n, bool avecAffichage);

int main() {

   const unsigned MIN = 1, 
                  MAX = 10000,
                  N = lireEntier(MIN, MAX);

   cout << "Suite de Syracuse pour n = " << N << " :\n";
   const unsigned NB_ITERATIONS = suiteDeSyracuse(N, true);
   cout << "Suite terminee en " << NB_ITERATIONS << " iteration"
        << (NB_ITERATIONS > 1 ? "s" : "") << "." << endl;

   return EXIT_SUCCESS;
}

unsigned lireEntier(unsigned a, unsigned b) {
   int n;
   cout << "Entrez un entier dans l'intervalle"
        << " [" << a << ", " << b << "] : ";
   cin >> n;
   return (unsigned) n;
}         

// NB La fonction ci-dessous n'affiche rien qui soit dépendant d'une langue
unsigned suiteDeSyracuse(unsigned n, bool avecAffichage) {
   unsigned m = n,
            nbIterations = 0;
   while (m > 1) {
      if (m % 2 == 0) {
         m = m / 2;
      } else {
         m = m * 3 + 1;
      }
      if (avecAffichage) {
         cout << m << endl;
      }   
      nbIterations++;
   }
   return nbIterations;
}
