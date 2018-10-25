/*******************************************************
Nom ......... : calcul.h
Role ........ : Effectu des calculs mathematique
Auteur ...... : Kally
Version ..... : V1.0 du 24/10/2018
Licence ..... : GFDL

********************************************************/



#ifndef calcul_h
#define calcul_h

/*  var1 exposant var2 return float    */
float exposant(float var1,float var2);

/*  var1 racine var2 eme return float    */
float racine(float var1,float var2);

/* revoie factorielle de var1   */
float factorielle(float var1);

/* revoie cosinus de var1  en degree */
float cose(float var1);

/* revoie sinus de var1   en degree*/
float sine(float var1);

/* renvoie une valeur aprocher de pi */
float pi(void);

#endif
