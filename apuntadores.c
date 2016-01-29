#include <stdio.h>
 
void bubbleSort(int *, int);
void printElems(int *, int);

int main () {
   int elems[] = {1000, 2, 3, 17, 50, -45, 10, 80, 5, 546, 0, 51, 10, 53, 894, 894};      //Elementos desordenados

   int tamano = (sizeof elems/sizeof *elems) -1;   //Obtenemos el tamaño del arreglo dividiendo el tamaño total de elementos entre eltamaño de un solo elemento.
   
   printf("Arreglo desordenado: \n");  printElems(elems, tamano);
   bubbleSort( elems, tamano);
   printf("Arreglo ordenado: \n");  printElems(elems, tamano);
   return 0;
}

void bubbleSort(int *arr, int size) {
   bool cambio = true;
   int tmp;

   while(cambio){
      cambio = false;
      for (int i = 0; i < size; ++i){
         if(arr[i] > arr[i+1]){
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            cambio = true;
         }
      }
   }
}

void printElems(int *arr, int size){
   for (int i = 0; i < size+1; ++i){
      printf("%i >> ", arr[i]);
   }
   printf("\n\n");
}