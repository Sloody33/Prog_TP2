#include <stdio.h>

int main() {
    char nom[40];
    printf("Nom ? ");
    scanf("%s", &nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
//dans le scanf on ne change jamais la variable nom 
//le nom prend seulement 3 lettre ce qui n'est pas assez