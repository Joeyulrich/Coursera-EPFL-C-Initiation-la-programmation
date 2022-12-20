#include <iostream>
using namespace std;

int main()
{
  int debut(0);
  do {
    cout << "de (>= 1) ? ";
    cin >> debut;
  } while (debut < 1);

  int fin(0);
  do {
    cout << "a (>= " << debut << ") ? ";
    cin >> fin;
  } while (fin < debut);

  /*******************************************
   * Completez le programme a partir d'ici.
   *******************************************/
//déclaration de variable
int k(0); //compteur de tour boucle j


//boucle de calcul

for (int i(debut);i<=fin;++i) {
	
	for (int j(i);j!=0;++k) {
		
		if (j%3==0) {
			j += 4;
			
		}else if (j % 3 != 0 and j % 4 == 0) {
			j /= 2;
			
		}else if (j % 3 != 0 and j % 4 != 0) {
			j -= 1;
		}
	}
	cout<<i<<" -> "<<k<<endl;
	k=0;
}
		
		
	
  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

  return 0;
}
