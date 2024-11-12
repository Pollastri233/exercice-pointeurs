//Concaténation de deux chaînes de caractères

#include <iostream>

using namespace std;

void concatene(char *dest, const char *source) {
    cout << "\nContenu de destination avant : " << dest <<"\n";

    //Détermination de la position du dernier caractère de dest (différent de \0)
    int i = 0;
    while (dest[i] != '\0') {
        i+=1;
    }

    //Concaténation de source à destination
    int j = 0;
    while (source[j] != '\0') {
        dest[i] = source[j];
        i+=1;
        j+=1;
    }
    dest[i] = '\0';

    cout << "Contenu de destination d'après : " << dest <<"\n\n";
}

int main() {
    char dest[] = "bonjour"; 
    const char *source = " les gars !";

    concatene(dest, source);

    return 0;
}

