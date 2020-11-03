#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char fichier[1000000000];
int main()
{
  FILE *fpt, *fpt2;
    printf("Please enter the name of the file you want to convert: \n");
       fgets(fichier, sizeof(fichier), stdin);
  fichier[strlen(fichier)-1] = 0x00;
      fpt = fopen(fichier, "rb");
    fpt2 = fopen("ascii.txt", "w");
char copy;
   int i;
   while( ( copy = fgetc(fpt) ) != EOF )
   {
      fprintf(fpt2, "%02X ", copy);
      if( !(++i % 16) )  putc('\n', stdout);
   }
   fclose(fpt);
   fclose(fpt2);
   putc('\n', stdout);

   return 0;
}
