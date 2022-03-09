//Calcula média de notas com peso total de 11
#include <stdio.h>
 
int main() {
 
    float A, B, C, notaA, notaB, notaC, media; 

    scanf ("%f %f %f", &A, &B, &C);

    notaA = (A * 2)/10;
    notaB = (B * 3)/10;
    notaC = (C * 5)/10;

    media = notaA + notaB + notaC;

    printf ("MEDIA = %.1f\n", media);


    return 0;
}