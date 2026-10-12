#include <stdio.h>

int main() {
    int a = 2;
    int b = 1;
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
// on ne peut pas diviser âr zero (erreur maths)