#include <iostream>

using namespace std;

int compare(const char *chaine1, const char *chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' || chaine2[i] != '\0') {
        char a = chaine1[i];
        char b = chaine2[i];

        // Convertir les caractères en minuscules pour la comparaison
        if (a >= 'A' && a <= 'Z') a += 32; // Convertir en minuscule
        if (b >= 'A' && b <= 'Z') b += 32; // Convertir en minuscule

        if (a < b) {
            return -1; // chaine1 est plus petite
        } else if (a > b) {
            return 1; // chaine1 est plus grande
        }

        i++;
    }

    return 0; // Les chaînes sont égales
}

int main(int argc, char const *argv[]) {
    const char *chaine1 = "bonjour mon monde";
    const char *chaine2 = "bonjour";

    int result = compare(chaine1, chaine2);
    cout << result << endl; // Afficher le résultat de la comparaison
    return 0;
}