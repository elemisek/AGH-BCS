#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float rand_int(int a,int b)
{
    return (float) rand()/RAND_MAX*(b-a)+a;
}
int main()
{
    const int N=100;
    long long dlugosc1, dlugosc2;
    srand(time(NULL));
    FILE *plik;
    plik=fopen("plik1.txt","w");
    float *tab = malloc(N*sizeof(float));
    for(int i=0; i<N; i++)
    {
        tab[i]=rand_int(1,10);
        fprintf(plik,"%f",tab[i]);
    }
    fseek (plik,0,SEEK_END);
    dlugosc1 = ftell(plik);
    printf ("Rozmiar pliku txt: %d\n", dlugosc1);
    fclose(plik);
    plik=fopen("plik1b","wb");
    fwrite(tab,sizeof(float),100,plik);
    fseek(plik,0,SEEK_END);
    dlugosc2 = ftell(plik);
    printf ("Rozmiar pliku binarnego: %d\n", dlugosc2);
    fclose(plik);
    plik=fopen("plik1b","rb+");
    fseek(plik,0,0);
    float a = 0.0;
    for(int i=4; i<dlugosc2; i+=5)
    {
        fseek(plik,i*sizeof(float),0);
        fwrite(&a,sizeof(float),1,plik);
    }
    float *tab2 = malloc(N*sizeof(float));
    fseek(plik,0,0);
    fread(tab2,sizeof(float),100,plik);
    for(int i=0; i<N; i++)
        {
        printf("%f ",tab2[i]);
    }
    fclose(plik);
    free(tab2);
    free(tab);
}
