/*******************************************************
Nom ......... : calcul.c
Role ........ : Effectu des calculs mathematique
Auteur ...... : Kally
Version ..... : V1.0 du 24/10/2018
Licence ..... : GFDL

********************************************************/

#include "calcul.h"

#define PAIRE(n) ( (n) &1) ? -1.0 : 1.0)

/*  var1 exposant var2 return float    */
float exposant(float var1,float var2)
{
    float resultat = 1;
    for(int n=0; n<var2; n++)
    {
        resultat = resultat * var1;
    }


    return resultat;
}


/*  var1 racine var2 eme return float    */
float racine(float var1,float var2)
{
    float r = 1;
    for(int n=1; n<100; n++)
    {
        r = (  (var2-1)*r   + var1/exposant(r,var2-1)      )         /var2;
    }

    return r;
}


/* revoie factorielle de var1   */
float factorielle(float var1)
{
    float r=1;
    for(int n=1; n<=var1; n++)
    {
        r = r * (float)n;
    }

    return r;
}



/* revoie cosinus de var1  en degree */
float cose(float var1)
{
    float sign;
    float cosx;
    float fact;
    var1 = var1 * (pi() / 180.0);
    cosx = 1;
    sign = -1;
    for(int i = 2; i <= 10; i = i + 2)
    {
        fact = 1;
        for(int j = 1; j <= i; j++)
        {
            fact =  fact * (float) j;
        }

        cosx = cosx + (exposant(var1,(float) i) / fact) * sign;
        sign = sign * (-1);
    }

    return cosx;
}




/* revoie sinus de var1   en degree*/
float sine(float var1)
{
    float r;
    r = var1 * (pi()/180);

    return cose(r+pi()/2);
}



/* renvoie une valeur aprocher de pi */
float pi(void)
{
    float r = 0;
    for(int n=0; n<1000; n++)
    {
        r = r + (  PAIRE(n)  / ( (float) (2*n+1)  );
    }

         return r*4;
}
