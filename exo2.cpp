//Copie du contenu de source dans destination

#include <iostream>

using namespace std;

void copie(char *destination, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i=i+1;
    }
    
    destination[i] = source[i];
    cout << "\nContenu de source copié dans destination : " << destination <<"\n\n";
}

int main(int argc, char const *argv[]) {
    char destination[] = ""; 
    const char *source = "voici ce qui a ete copier dans destination";
// allocation de memoire pour destination
    copie(destination, source);
    return 0;
}
