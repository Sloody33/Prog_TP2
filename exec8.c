#include <stdio.h>

int main() {
    int t[3] = {10, 20, 30};
    int i = sizeof(t)/sizeof(t[0]) ;

    printf("%d\n", t[i-i]); 
    return 0;
}
