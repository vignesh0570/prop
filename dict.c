#include<stdio.h>
#include<string.h>
 
int main() {
   char ss[5][20], ts[20];
   int i, j;
   printf("\ngive the 5 inputs  : ");
   for (i = 0; i < 5; i++)
      scanf("%s", ss[i]);
 
   for (i = 1; i < 5; i++) {
      for (j = 1; j < 5; j++) {
         if (strcmp(ss[j - 1], ss[j]) > 0) {
            strcpy(ts, ss[j - 1]);
            strcpy(ss[j - 1], ss[j]);
            strcpy(ss[j], ts);
         }
      }
   }
 
   printf("\nthe output is  : ");
   for (i = 0; i < 5; i++)
      printf("\n%s", ss[i]);
 
}
