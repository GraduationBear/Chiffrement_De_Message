
/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 3                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Projet-Chiffrement                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : MIQUEL Maxime                                                *
*                                                                             *
*  Nom-prénom2 : TIAN Shijie                                                  *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : vigenere.h                                                *
*                                                                             *
******************************************************************************/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char code_charV(char c, char m);

char decode_charV(char c, char m);

void chiffre_vigenere(char cle[], char* message);

void dechiffre_vigenere(char cle[], char* message);
