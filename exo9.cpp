// Extraction de chaîne 

#include <iostream>

using namespace std;

void sous_chaine(const char *source, char *dest, int debut, int longueur) {
    cout << "\nContenu de source : " << source <<"\n";
    cout << "\nContenu de dest avant extraction : " << dest <<"\n";

    int j = 0;
    //Parcours du contenu de source à partir de l'index debut, jusqu'à l'atteinte de la longueur souhaitée
    for (int i = debut; i < debut + longueur; i++) {
        if (source[i] == '\0') { //Sortie de la boucle si tout le contenu de source est parcouru
            dest[j] = '\0';
            break;
        }
        dest[j] = source[i];
        j+=1;
    }

    dest[j] = '\0';

    cout << "Contenu de dest apres extraction : " << dest <<"\n\n";
}

int main(int argc, char const *argv[]) {
    const char *source = "Hello World Ninja";
    char dest[] = "";
    sous_chaine(source, dest, 6, 9);
    return 0;
}