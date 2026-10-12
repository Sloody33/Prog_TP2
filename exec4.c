#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i = i+1;
    }
    return 0;
}
// on a oublié d'incrémenter i donc le resultat et toujours 0