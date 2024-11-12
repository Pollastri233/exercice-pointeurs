// Suppression de caractère

#include <iostream>

using namespace std;

void supprime_caractere(char *chaine, char caractere) {
    int i = 0;
    bool trouve = false;
    //Recherche des occurences du caractère à supprimer
    while (chaine[i] != '\0') {
        if (chaine[i] == caractere) {
            trouve = true;
            break;
        }
        i+=1;
    }

    if (trouve == false) { //Cas où le caractère n'a pas été trouvé
        cout << "\nAucune occurence de " << caractere << " dans " << chaine <<"\n\n";
    }
    else {
        cout << "\nContenu de chaine avant suppression de "<< caractere << " : " << chaine <<"\n";

        i = 0;
        //Suppression des occurences
        while (chaine[i] != '\0') {
            if (chaine[i] == caractere) {
                chaine[i] = ' ';
                i+=1;
            }
            else {
                i+=1;
            }
        }

        cout << "\nContenu de chaine après suppression de "<< caractere << " : " << chaine <<"\n";

        //Décalage des caractères restants pour éviter les espaces vides :
        i = 0;
        while (chaine[i] != ' ') {
            i+=1;
        }
            
        int j = i;
        while (chaine[i] != '\0') {
            int n = 0;
            while (chaine[j] == ' ') {
                n+=1;
                j+=1;
            }
            chaine[i] = chaine[j];
            if (chaine[i] == '\0') {
                break;
            }
            chaine[j] = ' ';
            i+=1;
            j = i;
        }
        
        cout << "\nContenu de chaine après décalage : " << chaine <<"\n\n";
    }

}

int main(int argc, char const *argv[]) {
    char chaine[] = "Hello World";
    char caractere = 'l';
    supprime_caractere(chaine, caractere);
    return 0;
}