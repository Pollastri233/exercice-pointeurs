// Compter les mots dans une phrase

#include <iostream>

using namespace std;

int compte_mots(const char *phrase) {
    int nbr = 0;

    int i = 0;
    bool begin = false;
    while (phrase[i] != '\0') {
        while (phrase[i] == ' ' && begin == false) {
            i+=1;
        }

        begin = true;

        int j = i;
        while (phrase[j] != ' ') {
            if (phrase[j] == '\0') {
                break;
            }
            j+=1;
        }

        nbr+=1;
        if (phrase[j] == '\0') {
            break;
        }
        
        while (phrase[j] == ' ') {
            j+=1;
        }
        i = j;
    }
    
    return nbr;
}

int main(int argc, char const *argv[]) {
    char phrase[] = "Comptons le nombre de mots d'une phrase";
    cout << "\nSoit la phrase '" << phrase << "'\n";
    cout << "Cette phrase compte " << compte_mots(phrase) << " mots\n\n";
    return 0;
}