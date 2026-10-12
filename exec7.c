#include <stdio.h>

int main() {
    float distance_km = 100;
    float vitesse_kmh = 26;
    float temps =distance_km / vitesse_kmh; 
    float minutes = temps * 60;
    printf("minutes = %1f\n", minutes); 
    return 0;
}
// float au lieu de int car si on a pas exactement une heure pile alors on manque de précision