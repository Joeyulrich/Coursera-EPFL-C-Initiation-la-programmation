#include <iostream>
#include <vector>
#include <array>
#include <string>


using namespace std;


char code (char c, int entier);

string decode(string coded, int decal);

string code (string s, int d);

char decale (char c, char d, int decal);


int main() {
	
	

	cout << code("Fuyez manants", 4) << " lorsqu elle recoit la chaine Fuyez manants et un decalage de 4" << endl;
	cout << "Son decodage: " << decode("Jycid qererxw", 4) << endl << endl;
	cout << code("Fuyez manants", 6) << " lorsqu elle recoit la chaîne Fuyez manants et un decalage de 6" << endl;
	cout << "Son decodage: " << decode("Laekf sgtgtzy", 6) << endl << endl;
	cout << code("Fuyez manants", -4) << " lorsqu’elle recoit la chaîne Fuyez manants et un decalage de -4" << endl;
	cout << "Son decodage: " << decode("Bquav iwjwjpo", -4) << endl << endl;
	cout << code("Avez-vous vu mes 3 chats et mes 2 chiens ?", -4) << " lorsqu elle recoit la chaîne Avez-vous vu mes 3 chats et mes 2 chiens ? et un decalage de 4" << endl;
	cout << "Son decodage: " << decode("Avez-vous vu mes 3 chats et mes 2 chiens ?", 4) << endl;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


//corps fonctions
char code(char c, int d) {
	
	if (c > 'a' && c < 'z' ) {
		
		return decale( c, 'a', d);
	
	}else if (c > 'A' && c < 'Z') {
		
		return decale(c, 'A', d);
	}
	
	else return c;
}


string decode(string coded, int decal){
	
	decal *= -1; //inverser le decalage pour decoder
	
	for (size_t i = 0; i < coded.size(); ++i) {
		
		
		coded[i] = code((coded[i]), decal);
		
	}
	
	return coded;
}


char decale(char c, char d, int decal){
	
	while (decal < 0 )
	
	{ 
		decal += 26 ;
	}
	
	return d + (((c - d) + decal) % 26);
	
}



string code (string s, int d) {
	
	
	for ( size_t i = 0; i < s.size();++i) {
		
		s[i] = code((s[i]), d);
	}
	
	return s;
}


