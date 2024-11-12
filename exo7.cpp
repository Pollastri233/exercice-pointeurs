//Conversion majuscule/Minuscule

#include <iostream>

using namespace std;

void to_upper(char *chaine) {
    cout << "\nConversion de la chaine en majuscule : " <<"\n";
    cout << "" << chaine <<" ---> ";

    int i = 0;
    while (chaine[i] != '\0') {
        //Valeur entière de la lettre selon le code ASCII
        int n = (int)chaine[i];

        if (n >= 65 && n <= 90) { //Si la lettre est déjà en majuscule
            i+=1;
            continue;
        }
        else if (n >= 97 && n <= 122) { //Si la lettre est en minuscule
            n -= 32;
            chaine[i] = (char)n;
        }
        else { //S'il s'agit d'un autre caractère
            i+=1;
            continue;
        }
        i+=1;
    }
    cout << "" << chaine <<"\n\n";
}

void to_lower(char *chaine) {
    cout << "Conversion de la chaine en minuscule : " <<"\n";
    cout << "" << chaine <<" ---> ";

    int i = 0;
    while (chaine[i] != '\0') {
        //Valeur entière de la lettre selon le code ASCII
        int n = (int)chaine[i];

        if (n >= 97 && n <= 122) { //Si la lettre est déjà en minuscule
            i+=1;
            continue;
        }
        else if (n >= 65 && n <= 90) { //Si la lettre est en majuscule
            n += 32;
            chaine[i] = (char)n;
        }
        else { //S'il s'agit d'un autre caractère
            i+=1;
            continue;
        }
        i+=1;
    }

    cout << "" << chaine <<"\n\n";
}

int main(int argc, char const *argv[]) {
    char chaine1[] = "Hello World";
    to_upper(chaine1);
    char chaine2[] = "Hello World";
    to_lower(chaine2);

    return 0;
}
