#include <iostream>

using namespace std ;

int main ()
{
 cout << "Pensez Ã  un champignon : amanite tue-mouches, pied bleu, girolle," << endl
       << "cÃ¨pe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;
int q1(42);
int q2(42);
int q3(42);
cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
cin >> q1 ;

if (q1==1) {
	cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
	cin >> q2 ;
}
	if (q2==1) {
		cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
		cin >> q3 ;
	}else if (q2==0) {
		 cout << "le coprin chevelu";
		 return 0;
	 }
		if (q3==1) {
			 cout << "l'amanite tue-mouches";
			 return 0 ;
			 
		 }else if (q3==0) {
			  cout << "l'agaric jaunissant";
			  return 0;
		  }
if (q1==0) {
	 cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
	 cin >> q2;
 }
	if (q2==1) {
		 cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
		 cin >> q3;
	 }
		 if (q3==1) {
			 cout << "le pied bleu";
			 return 0;
	 }else if (q3==0) {
		cout << "la girolle";
		return 0;
	 }else if (q2==0) {
		 cout << "le cèpe de Bordeaux";
		 return 0;
 }
	return 0;
}
