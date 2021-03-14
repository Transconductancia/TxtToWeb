/*
autor: MANUEL  ALFONSO MANJARERS RIVERA 
fecha: 14/03/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE  1

void delay(int milisegundos){

clock_t time = clock();
 while(clock()<time +milisegundos); 
}

int main(void){
    
   unsigned char ramdon=0,cont=0;
    unsigned char exito=0; 
   unsigned char file_name[]="log.txt";
   FILE *ptr_file=NULL; 

  

 
   srand(time(NULL));
 while(TRUE){
    ptr_file=fopen(file_name,"w");

   if(ptr_file==NULL){
         printf("erro al intentar abrir el archivo");
       return(1); 
        }
  
             exito =fflush(NULL);
        while(exito==1)exito=fflush(NULL);

            ramdon = rand()%100;     
            fprintf(ptr_file,"%d",ramdon);
       
        cont++; 
            
        fclose(ptr_file); 
            delay(5000); 
        }

    return 0;
}