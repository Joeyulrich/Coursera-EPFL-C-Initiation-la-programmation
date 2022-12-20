#include <iostream>
#include <iomanip> // pour setprecision()
using namespace std;

int main()
{
  // Réduire le format d'affichage
  cout << setprecision(4);

  // Paramètres
  double taux_croissance_lapins(0.3);
  double taux_attaque(0.01);
  double taux_croissance_renards(0.008);
  double taux_mortalite(0.1);
  int duree(50);

  double renards_i(0.0);
  double lapins_i(0.0);

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/

  // ===== PARTIE 1 =====
  // Saisie des populations initiales
do {
  cout << "Combien de renards au départ (>= 2) ? ";
  cin>> renards_i;
}while (renards_i<2);
double save_ren(renards_i);//sauvegarde valeur renards
do {
  cout << "Combien de lapins au départ  (>= 5) ? ";
  cin>>lapins_i;
}while(lapins_i<5);
double save_lap(lapins_i);//sauvegarde valeur lapins

//variable de danger d extinction et d extinction averée
bool danger_ren (false);
bool danger_lap (false);
bool mort_ren (false);
bool mort_lap (false);
bool danger_ren_2 (false);
bool danger_lap_2 (false);
bool mort_ren_2 (false);
bool mort_lap_2 (false);

  // ===== PARTIE 2 =====
  // PremiÃ¨re simulation
  cout <<  endl << "***** Le taux d'attaque vaut "<< taux_attaque * 100 << "%" <<  endl;
for (int i(1);i<=duree;++i) {
	lapins_i = lapins_i*(1.0+taux_croissance_lapins-taux_attaque*renards_i) ;
	renards_i= renards_i*(1.0+taux_attaque*lapins_i*taux_croissance_renards-taux_mortalite);
	if (lapins_i <2) {
		lapins_i =0;
		mort_lap = true;	
	}
	if (renards_i<2) {
		renards_i=0;
		mort_ren = true;
	}
	if (renards_i <5) {
		 danger_ren = true;
	 }
	 if (lapins_i <5) {
		 danger_lap = true;
}
if (lapins_i==0 and renards_i==0) {
	break;
}
cout<<"Après "<<i<<" mois, il y a "<<lapins_i<<" lapins et "<<renards_i<<" renards"<<endl;
}
cout<<"Après "<<duree<<" mois, il y a "<<lapins_i<<" lapins et "<<renards_i<<" renards"<<endl;

//messages d alerte première boucle
	
	if (danger_ren==true) {
		cout <<endl<< "Les renards ont été en voie d'extinction" << endl;
		if (mort_ren==false) {
			cout << "mais la population est remontée ! Ouf !" << endl;
		}else {cout << "et les renards ont disparu :-(" << endl;}
	}
			
  
 if (danger_lap==true) {
	   cout <<endl<< "Les lapins ont été en voie d'extinction" << endl;
	   if (mort_lap==false) {
		   cout << "mais la population est remontée ! Ouf !" << endl;
	   }else {cout << "et les lapins ont disparu :-(" << endl;}
   }

  if ((danger_lap==false) and (danger_ren==false)) {
  cout <<endl<< "Les lapins et les renards ont des populations stables." << endl;
}
  // ===== PARTIE 3 =====
  // Variation du taux d'attaque
  cout << endl;
  double tx_atq_1(0.);
  double tx_atq_2(0.);
  double fin_2(0.);
do {
  cout << "taux d'attaque au départ en % (entre 0.5 et 6) ? ";
  cin>>tx_atq_1;
}while ((tx_atq_1 <0.5) or (tx_atq_1 >6));

do {
  cout << "taux d'attaque à  la fin  en % (entre "<<tx_atq_1;
  cout << " et 6) ? ";
  cin>>tx_atq_2;
}while((tx_atq_2<tx_atq_1) or (tx_atq_2>6)) ;
fin_2=tx_atq_2/100;
tx_atq_1=tx_atq_1/100;
for (int l(tx_atq_1*100);l<(fin_2*100)+1;++l) {
	for (int m(1);m<=duree;++m) {
	danger_ren_2 = false;
	danger_lap_2=false;
	mort_ren_2=false;
	mort_lap_2=false;
	save_lap = save_lap*(1.0+taux_croissance_lapins-tx_atq_1*save_ren) ;
	save_ren = save_ren*(1.0+tx_atq_1*save_lap*taux_croissance_renards-taux_mortalite);
	if (save_lap<2) {
		save_lap =0;
		mort_lap_2 = true;
		
	}
	if (save_ren<2) {
		save_ren=0;
		mort_ren_2 = true;
	}
	if (save_ren <5) {
		 danger_ren_2 = true;
	 }
	 if (save_lap <5) {
		 danger_lap_2 = true;
}
}
cout <<  endl << "***** Le taux d'attaque vaut "<< l<< "%" <<  endl;
cout<<"Après "<<duree<<" mois, il y a "<<save_lap<<" lapins et "<<save_ren<<" renards"<<endl;

//messages d'alertes_2
	if (danger_ren_2==true) {
		cout <<endl<< "Les renards ont été en voie d'extinction" << endl;
		if (mort_ren_2==false) {
			cout << "mais la population est remontée ! Ouf !" << endl;
		}else {cout << "et les renards ont disparu :-(" << endl;}
	}
			
  
 if (danger_lap_2==true) {
	   cout <<endl<< "Les lapins ont été en voie d'extinction" << endl;
	   if (mort_lap_2==false) {
		   cout << "mais la population est remontée ! Ouf !" << endl;
	   }else {cout << "et les lapins ont disparu :-(" << endl;}
   }

  if ((danger_lap_2==false) and (danger_ren_2==false)) {
  cout <<endl<< "Les lapins et les renards ont des populations stables." << endl;
}

}

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
