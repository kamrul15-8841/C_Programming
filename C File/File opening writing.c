#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("text.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);

   if ((fptr = fopen("text.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }



   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr);



   return 0;
}










