#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

unsigned int lireEntier(unsigned int a, unsigned int b);

// Calcule la suite de Syracuse du nombre n
// Renvoie en valeur de retour le nombre d'itérations nécessaires
// Affiche les diverses valeurs de la suite si avecAffichage vaut true;
// ne les affiche pas, sinon
unsigned int suiteDeSyracuse(unsigned int n, bool avecAffichage);

int main() {

   const unsigned int MIN = 1, 
                      MAX = 10000,
                      N = lireEntier(MIN, MAX);
                      
   const int W = (int) log10(MAX) + 1; // pour l'affichage (setw(W))

   for (unsigned int n = MIN; n <= N; ++n) {
      cout << "Nbre d'iter. pour n = "
           << setw(W) << left << n << " :"
           << setw(W) << right << suiteDeSyracuse(n, false) << endl;       
   }

   return EXIT_SUCCESS;
}

unsigned int lireEntier(unsigned int a, unsigned int b) {
   int n;
   cout << "Entrez un entier dans l'intervalle"
        << " [" << a << ", " << b << "] : ";
   cin >> n;
   return (unsigned) n;
}         

// NB La fonction ci-dessous n'affiche rien qui soit dépendant d'une langue
unsigned int suiteDeSyracuse(unsigned int n, bool avecAffichage) {
   unsigned int m = n,
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
