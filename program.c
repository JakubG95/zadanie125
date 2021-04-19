#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float objetosc_prostopadloscianu();
float objetosc_ostroslupa();

int main ()
{
    for(;;)
{

int c=68 ;

printf("Wybierz bryle\n");
printf("1.objetosc prostopadloscianu\n");
printf("2.objetosc ostroslupa o podstawie prostokata\n");
printf("3. wyjscie\n");
c =getch();
switch (c)
{

case '1':
objetosc_prostopadloscianu();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '2':
objetosc_ostroslupa();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '3':
exit(EXIT_SUCCESS);

default:
    printf("Zly wybor prosze wybrac cyfre od 1 do 3\n");
    printf("\nacisnij dowolny przycisk zeby wrocic do menu\n");
    //exit(EXIT_SUCCESS);
    getch();
    for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;
}

}
    return 0;
};

float objetosc_prostopadloscianu()
{
 float a, b, h, wynik;

printf(" podaj dlugosc boku a podstawy prostopadloscianu: ");
scanf("%i",&a);
if(a<0)
{ printf(" zle wartosci! \n\n");
exit (EXIT_FAILURE);
};
printf(" \n\n podaj dlugosc boku b podstawy prostopadloscianu: ");
scanf("%i",&b);
if(b<0)
{ printf(" zle wartosci! \n\n");
exit (EXIT_FAILURE);
};
printf(" \n\n podaj wysokosc prostopadloscianu: ");
scanf("%i",&h);
if(h<0)
{ printf(" zle wartosci! \n\n");
exit (EXIT_FAILURE);
};
wynik = a*b*h;
printf("wynik= ""%.4f", wynik);
return wynik;
};
float objetosc_ostroslupa()
{
    float a, b, h, wynik;
    printf(" podaj dlugosc boku a podstawy ostroslupa:\n");
    scanf("%f", &a);
    if (a<0)
    {
         printf("zle wartosci!\n");
         exit (EXIT_FAILURE);
    };
     printf(" podaj dlugosc boku b podstawy ostroslupa:\n");
    scanf("%f", &b);
    if (b<0)
    {
         printf("zle wartosci!\n");
         exit (EXIT_FAILURE);
    };
     printf("podaj wysokoœæ h ostroslupa:\n");
    scanf("%f", &h);
    if (h<0)
    {
         printf("zle wartosci!\n");
         exit (EXIT_FAILURE);
    };
    wynik = (a*b*h)/3.0;
    printf("wynik= ""%.4f", wynik, "\n");
    return wynik;
};



