// Program ce izracunat prostornu dijagonalu kvadra.

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
#include<math.h>
//Funkcija za  prostorne dijagonale kvadra
float dijagonala(int a, int b,int c)
{
	float dijagonala;
	dijagonala=sqrt((a*a)+(b*b)+(c*c));
    return dijagonala;
}
  

int main()
{
    int a,b,c;
    printf("Unesi duljine stranice  \n");
    scanf("%d %d %d",&a,&b,&c);
    // Pozivanje funkcije.
    float d= dijagonala(a,b,c);
    printf("Prostorna dijagonala kvadra je: %.2f",d);
    return 0;
}
