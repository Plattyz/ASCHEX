#include <stdio.h>
#include <string.h>
char fichier[1000000000];
int main(){
    FILE *fpt, *fpt2;
    printf("Please enter the name of the file you want to convert: \n");
    gets(fichier);
    fpt = fopen(fichier, "r");
    fpt2 = fopen("hex.txt", "w");
char copy;
while((copy = fgetc(fpt)) != EOF)
fprintf(fpt2, "0x%02X ", copy);
    fclose(fpt);
    fclose(fpt2);
return 0;
}
