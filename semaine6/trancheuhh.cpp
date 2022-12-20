#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

//protos
int somme_consecutifs_max(vector<int> ligne);
vector<size_t> lignes_max (vector<vector<int>> tableau);
vector<vector<int>> tranches_max(vector<vector<int>> tableau);



//programme
int main () {
	
	//test fonction somme
	
	/*vector<int> moncul({0,0,0,0,0,0});
	
	cout << somme_consecutifs_max(moncul) << endl;*/
	
	//test fonction lignes_max
	
	//exemple déroulement
	vector<vector<int>> moncul = {
		{2, 1, 0, 2, 0, 3, 2},
		{0, 1, 0, 7, 0},
		{1, 0, 1, 3, 2, 0, 3, 0, 4},
		{5, 0, 5},
		{1, 1, 1, 1, 1, 1, 1}
	};

	vector<vector<int>> resultat = tranches_max(moncul);
	
	

	
	
	return 0;
}






//corps
 int somme_consecutifs_max(vector<int> ligne) { //fonction qui trouve le max d'une ligne
	 
	int best(0); int current(0);
	
	for (size_t i(0); i < ligne.size(); ++i) {
		
		if (ligne[i] != 0) {
			
			current += ligne[i];
			
			if ( best < current ) { best = current; }
			
		}else {if (best < current) { best = current; current = 0; }else { current = 0; }  }
		
	}
	
	return best;
 }
 
vector<size_t> lignes_max(vector<vector<int>> tableau)//fonction qui retourne les lignes max dans un tableau resultat
{
	vector<size_t> resultat;
	vector<size_t> temp;
	int max(0), somme(0);

	for (auto ligne : tableau)
	{
		somme = somme_consecutifs_max(ligne);
		if (somme > max) max = somme;
		temp.push_back(somme);
	}

	for (size_t i = 0; i < temp.size(); i++)
	{
		if (temp[i] == max) resultat.push_back(i);
	}

	return resultat;
}
 
 vector<vector<int>> tranches_max(vector<vector<int>> tableau){//fonction qui utilise les deux precedente pour faire l exercice
	 
	 vector<vector<int>> resultat;
	 
	 vector<size_t> lignes = lignes_max(tableau);
	 
	 for (size_t i = 0; i < lignes.size(); ++i) {
		
		 resultat.push_back(tableau[lignes[i]]);
	 }
	  
	 return resultat;
 }
 
