//Recherche de caractère

#include <iostream>

using namespace std;

char *cherche_char(const char *chaine, char caractere) {
    char *car_pointer = NULL;
    
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] == caractere) {
            car_pointer = &caractere;
            cout << "\nLe Caractere " << caractere << " a ete trouver dans la chaine donnee\n\n";
            return car_pointer;
        }
        i+=1;
    }

    cout << "\nLe Caractere " << caractere << " n'a pas ete trouver dans la chaine donnee\n\n";

    return car_pointer;
}

int main(int argc, char const *argv[]) {
    const char *chaine = "Hello World !";
    char caractere = 'z'; 
    
    cherche_char(chaine, caractere);
    return 0;
}
