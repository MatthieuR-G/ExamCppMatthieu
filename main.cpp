#include <iostream>
#include <string>
using namespace std; 
int main() {
string Phrs;
string MAJ= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string min="abcdefghijklmnopqrstuvwxyz";
int i, j;

    cout << "Veuillez inserer une chaine en CamelCase!" << endl;  
    getline(cin, Phrs);  

cout << "La chaine est devenu : "<<endl;  

//Pour le premier caractère 
if (Phrs.length() > 0) {  
    cout << Phrs[0];  
}  

//Pour les autres caractères en majuscules
for (i = 1; i < Phrs.length(); i++) {  
    for (j = 0; j< MAJ.length(); j++) {  
        if (Phrs[i] == MAJ[j]) {  
            cout << " ";  
            break;
        }  
    }  
    cout << Phrs[i];  
}  

cout << endl;  
return 0;
}