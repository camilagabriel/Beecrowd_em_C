#include <stdio.h>
 
int main() {
 
    float A,B, notaA, notaB, media; 

    scanf ("%f %f", &A, &B);

    notaA = (A * 3.5)/11;
    notaB = (B * 7.5)/11;

    media = notaA + notaB;

    printf ("MEDIA = %.5f\n", media);


    return 0;
}