//Longueur d'une chaîne de caractères

#include <iostream>

using namespace std;

int longueur(const char *chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i=i+1; //incrementer i a chaque iteration
    }
    return i;
}

int main(int argc, char const *argv[]) {
    const char *phrase = "la longueur de ce chaine de carractere correspond au nombre de caractere utiliser dans cette phrase. merci.";
    cout << "Longueur de la chaine : " << longueur(phrase) << "\n";
    return 0;
}