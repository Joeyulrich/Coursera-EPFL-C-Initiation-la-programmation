#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * ComplÃ©ter le code Ã  partir d'ici
   *****************************************************/
   
if  (debut<0 or debut>24 or fin <0 or fin>24) {
    cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
    return 0;
}
    if (debut == fin){
    cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
    return 0;
}
    if (debut > fin or fin < debut) {
    
    cout << "Bizarre, le début de la location est après la fin ..." << endl;
    return 0;
}

int tarif1 (0);
int tarif2 (0);
int heure1 (0);
int heure2 (0);


if (debut>=7 and debut<=17 and fin>=7 and fin<=17) {
	tarif2=(fin-debut)*2;
	heure2= (fin-debut);
}
if (debut<7 and fin>17) {
	tarif1=(7-debut)+(fin-17);
	tarif2=20;
	heure1=(7-debut)+(fin-17);
	heure2=10;
}
if (debut>=7 and debut<17 and fin>17) {
	tarif1=fin-17 ;
	tarif2=(17-debut)*2 ;
	heure1=fin-17;
	heure2=17-debut;
}
if (debut<7 and fin>7 and fin<=17) {
	tarif1=7-debut;
	tarif2=(fin-7)*2; 
	heure1=7-debut;
	heure2=fin-7;
}
if (debut<7 and fin <=7) {
	tarif1=fin-debut;
	heure1=fin-debut;
}
if (debut>=17 and fin>17) {
	tarif1=fin-debut;
	heure1=fin-debut;
}
int tartot (tarif1+tarif2);

    cout << "Vous avez loué votre vélo pendant" << endl;
if (tarif1!=0 and heure1!=0) {
      cout <<heure1<< " heure(s) au tarif horaire de "
           <<"1"<<" franc(s)" << endl;
	   }
if (tarif2!=0 and heure2!=0) {
	cout<<heure2<< " heure(s) au tarif horaire de "
	    <<"2"<<" franc(s)" << endl;
}
    cout << "Le montant total à  payer est de "
         << tartot<<" franc(s)." << endl;

  /*******************************************
   * Ne rien modifier aprÃ¨s cette ligne.
   *******************************************/

  return 0;
}
