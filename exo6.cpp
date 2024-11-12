//Inversion de chaîne

#include <iostream>

using namespace std;

void inverse(char *chaine) {
    cout << "\nContenu de chaine avant : " << chaine <<"\n";

    int i = 0;
    //Détermination de la longueur de la chaine
    while (chaine[i] != '\0') {
        i+=1;
    }

    //Inversion des caractères
    int l = i;
    int j;
    for (i=0, j=l-1; i<l/2, j>=l/2; i++, j--) {
        char let = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = let;
    }

    cout << "Contenu de chaine après : " << chaine <<"\n\n";
}

int main(int argc, char const *argv[]) {
    char chaine[] = "Hello";
    inverse(chaine);

    return 0;
}
