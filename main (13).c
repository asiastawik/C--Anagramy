#include <stdio.h>
//#include <ctype.h>

int porownanie(int tab1[], int tab2[])
{
   for(int i = 0; i < 256; i++)
    if (tab1[i] != tab2[i]) //Czyli funkcja przerywa pracę (i zwraca 0) po pierwszym zauważeniu różnicy
    return 0;

     //Zwraca 1 tylko wtedy, gdy obie tablice są identyczne.
    return 1; //nie moze tu byc else! poniewaz wtedy od razu za pierwszym i moze sie zgadzac i dawac wartosc 1, a reszty nie sprawdzi
}

int main()
{
  int x, y;
  int litx[256]= {0}; // wszystkie mo¿liwe kody aski
  int lity[256]= {0};

    printf("Podaj pierwszy napis zlozony z malych liter:   ");

  while (1)
  {
        x= getchar();
        if (x == 10) break; //enter
        litx[x]++;
        printf("x= %3d (%c)\n", x, x < 97 || x > 122 ? '.' : x ); // %c - kod aski; %3d - beda stale odstepy, jesli tal to wydruk kropki, jesli nie to wydruk x

  }

for (int i=0; i<256; i++)
{
    if ((litx[i]!=0)&&(i>97 || i<122))
    {
        printf ("%d wystapilo: %d\n", i, litx[i]);
    }
}

  printf("Podaj drugi napis zlozony z malych liter:   ");

  while (1)
  {
    y=getchar();
    if (y == 10) break;
    lity[y]++;
    printf("y= %3d (%c)\n", y, y < 97 || y > 122 ? '.' : y );
  }

for (int i=0; i<256; i++)
{
    if ((lity[i]!=0)&&(i>97 || i<122))
    {
        printf ("%d wystapilo: %d\n", i, lity[i]);
    }
}

int p = porownanie (litx, lity); //sama nazwa tablicy w wywołaniu funkcji
//przesyła całą tablicę do funkcji (tak na prawde to adres jej początku, bo tablice to wskaźniki).

    if (p==1)
        printf("Sa to anagramy ");

    if(p==0)
        printf ("To nie sa anagramy  ");

  return 0;
}
