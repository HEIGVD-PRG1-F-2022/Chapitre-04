#include <cstdlib>
#include <iostream>
using namespace std;

bool estBissextile(int annee); // prototypes
void test(int annee);

int main() {

   test(1900);
   test(2000);
   test(2010);
   test(2020);

   return EXIT_SUCCESS;
}

bool estBissextile(int annee) {
   return (annee % 400 == 0) or (annee % 4 == 0 and annee % 100 != 0);
// Autres variantes possibles :
//    return (annee % 400 == 0) || (annee % 4 == 0 && annee % 100 != 0);
//    return annee % 400 == 0 or annee % 4 == 0 and annee % 100 != 0;
//    return annee % 400 == 0 || annee % 4 == 0 && annee % 100 != 0;
//    return !(annee % 400) || !(annee % 4) && annee % 100;
}

void test(int annee) {
   cout << annee << " : " << boolalpha << estBissextile(annee) << endl;
}

// 1900 : false
// 2000 : true
// 2010 : false
// 2020 : true
