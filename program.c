#include <stdio.h>
int main ()
{
int a,b,h,p;
if(a>=0,b>=0,h>=0)
{
printf(" podaj dlugosc boku a podstawy prostopadloscianu: ");
scanf("%i",&a);
printf(" \n\n podaj dlugosc boku b podstawy prostopadloscianu: ");
scanf("%i",&b);
printf(" \n\n podaj wysokosc prostopadloscianu: ");
scanf("%i",&h);
p=a*b*h;
printf("\n obietosc prostopadloscianu wynosi: p=%i",p);
}
if(a<0)
{ printf(" zle wartosci! \n\n");
}
if(b<0)
{ printf(" zle wartosci! \n\n");
}
if(h<0)
{ printf(" zle wartosci! \n\n");
}
getch();
return 0;
}
