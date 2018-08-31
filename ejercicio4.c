#include<stdio.h>
int main(){

int filas,columnas;
   int k=0,l=0;
   int i ,j;



     printf("tamaño de las filas de su Matriz");  
     scanf("%d",&filas);  
         
         printf("tamaño de las columnas de su Matriz");
            scanf("%d",&columnas);  
        
   int matriz[filas][columnas];
    printf("\n");
     printf("Llenamos la matriz ");
      for ( i = 0; i <filas; i++) {
          for ( j = 0; j <columnas; j++) {
     printf("Elementos de tu matriz A [%d ,%d] ",i,j);
     scanf("%d",&   matriz[i][j]);

          }
      }
  
 int f[filas];
    int c[columnas];
   
        for (i = 0; i<filas; i++) {
            for ( j = 0; j < columnas; j++) {
          f[i]+=matriz[i][j];      
            }
        }
       
     for (i = 0; i<columnas; i++) {
            for (j = 0; j < filas; j++) {
          c[i]+=matriz[j][i];      
            }
        }
    
    int js=0;
  
 
        for (i=(columnas-1); 0 <= i; i--) {
			
        l+=matriz[js][i];   
        js++;
        }
    
        for (i =0; i <filas; i++) {
            k+=matriz[i][i];
        }
      
      printf("\nLa suma de filas es:");
        for (i = 0; i < filas; i++) {
         printf("fila %d ",(i+1));
          printf(" = %d",f[i]);
         
        }
  printf("\nLa suma de columnas es:");  
        for (i = 0; i < columnas; i++) {
         printf("columna %d",(i+1));
          printf(" = %d",c[i]);
        }
      
       printf("\n la suma de la diagonal secundaria es  %d",l); 
            
             printf("\n La suma de la diagonal principal es %d",k
            );
            
		}
