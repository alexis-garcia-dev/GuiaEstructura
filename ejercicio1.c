   #include<stdio.h>
   
   
   int main(){
	   int filasA,columnasA,filasB,columnasB;
	   int i,j;
	   int p;

     printf("tamaño de la filas de tutu Matriz A\n");   
     scanf("%d",&filasA); 
 
 printf("tamaño de la columnas de tu Matriz A\n");
      scanf("%d",&columnasA); 

int matriz1[filasA][columnasA];
	     do{   printf("tamaño de la filas de tu Matriz B\n");    
        scanf("%d",&filasB); 
         printf("tamaño de la columnas de tu Matriz B\n");
         scanf("%d",&columnasB); 
       }
       while(columnasA!=filasB);
       
       int matriz2[filasB][columnasB];
       int temporal[filasA][columnasB];
    printf("\n");
      printf("la matriz A\n");
      for (i = 0; i <filasA; i++) {
          for (j = 0; j <columnasA; j++) {
      printf("Elemtos de la matriz A [%d , %d]",i,j);
     scanf( "%d",&matriz1[i][j]);
          }
      }
      
      
         printf("\n");
  printf("la matriz B");
      for (i = 0; i <filasB; i++) {
          for (j = 0; j <columnasB; j++) {
     printf("Elementos de la matriz B [%d , %d]",i,j);
      scanf("%d",&matriz2[i][j]);
          }
      }
      
            for (p = 0; p <filasA; p++) {
        for (i = 0; i <columnasB; i++) {
          for (j = 0; j <columnasA; j++) {
              temporal[p][i]+=matriz1[p][j]*matriz2[j][i];  
          }
      }
  }
       
       
for ( i = 0; i < filasA; i++) {
      int z=0;
       for ( j = 0; j < columnasB; j++) {
             z+=temporal[i][j];
                      
           }printf("%d",z);
       }
       
	   return 0;
	   }
    
