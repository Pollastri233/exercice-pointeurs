//Recherche de caractère

#include <iostream>

using namespace std;

char *cherche_mot(const char *phrase, char *mot) {
    char *word_pointer = NULL;
    char inter_word[] = "";
    
    int i = 0;
    int k = 0;
    while (phrase[i] != '\0') {
        if (phrase[i] == ' ') {
            int j = 0;
            bool find = false;
            while (inter_word[j] != ' ') {
                if (inter_word[j] == mot[j]) {
                    find = true;
                }
                else {
                    find = false;
                    break;
                }
                j+=1;
            }

            if (find == true) {
                cout << "Mot trouvé";
                word_pointer = &inter_word[0];
                return word_pointer;
            }
            else {
                int j = 0;
                while (inter_word[j] != ' ') {
                    inter_word[j] = ' ';
                    j+=1;
                }
                k = 0;
                i+=1;
            }
        }

        else {
            inter_word[k] = phrase[i];
            i+=1;
            k+=1;
        }
    }

    cout << "Mot non trouve";

    return word_pointer;
}

int main(int argc, char const *argv[]) {
    const char *phrase = "Ceci est un devoir de programmation sur les pointeurs et les chaines de caracteres.";
    char mot[] = "pointeurs"; 
    
    cherche_mot(phrase, mot);
    return 0;
}
