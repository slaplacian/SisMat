#ifndef DISC_H
#define DISC_H

typedef struct disc {
    int numero;
    char nome[100];
    char prof[100];
    int creditos;
    struct disc *next;
    struct disc *prev;
    char periodo[7];
    int index;
} Disc;

Disc *newDisc(int numero, char *nome, char *prof, int creditos, char *periodo,Disc *prev);
void removeDiscbyIndex(Disc **endHead, int index);
void removeDiscbyDiscName(Disc **endHead, char *name);
void showDiscs(Disc **endHead);
Disc *loadDiscsFromText(char *filename);
void saveDiscInFile(Disc **endHead, char *filename);

#endif /* DISC_H */