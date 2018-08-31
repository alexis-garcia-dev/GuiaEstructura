#include<stdio.h>
int main(){
int i,j;
printf("tamaño de las filas de tu Matriz A"); 
 int filasA; 
scanf("%d",&filasA);   
     
    printf("tamaño de la columnas de tu Matriz A");
     int columnasA; 
scanf("%d",&columnasA);

       int A[filasA][columnasA];    
      int B[columnasA][filasA];


for (i = 0; i < filasA; i++) {
           for ( j = 0; j < columnasA; j++) {
               printf("ingrese un valor\n");
               scanf("%d",& A[i][j]);
              
           }
       }


for (i = 0; i < filasA; i++) {
     int h=0;
       for (j = 0; j < columnasA; j++) {
             h=h+A[i][j];
                      
           }printf("%d",h);
       }


       for (i = 0; i < filasA; i++) {
           for (j = 0; j < columnasA; j++) {
           B[j][i]=A[i][j];    
           }
       }

for (i = 0; i < columnasA; i++) {
  int s=0;
         for (j = 0; j < filasA; j++) {
             s=s+B[i][j];
             
    }printf("%d",s);
   printf("\n");
       }
	
	
return 0;
	
	}
