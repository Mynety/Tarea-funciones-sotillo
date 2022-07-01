#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char **argv) {
    char *cadenaprin;
    int i,largo,temp;


    for (i=0;i<argc;i++) {
        largo+=strlen(argv[i]);
    }
    cadenaprin=(char *)malloc(sizeof(char)*(largo+1));
    strcpy (cadenaprin,"");
    if (cadenaprin == NULL) {
        printf ("Se produjo un error al guardar la memoria\n");
        return 1;
    }

   
    for (i=0;i<argc;i++) {
        cadenaprin=strcat(cadenaprin,argv[i]);
    }

    printf ("\nLa cadena original es: %s\n",cadenaprin);
   
    for (i=0;i<strlen(cadenaprin)/2;i++) {
        temp = cadenaprin [i];
        cadenaprin[i]=cadenaprin[strlen(cadenaprin)-1-i];
        cadenaprin[strlen(cadenaprin)-1-i]=temp;
    }

    printf ("\n-------\n");
    printf ("La cadena modificada es: %s\n",cadenaprin);
system("pause");
    return 0;
}
