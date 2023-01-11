#include <stdio.h>

int main(){
      int row;
      int col;
    scanf("%d%d", &row , &col);
    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];
   int *ptr1= &arr1[0][0];
int *ptr2=&arr2[0][0];
  int *ptr3=&arr3[0][0];
  
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
              scanf("%d", ptr1+j+(i*col));
        }
    }
   for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
              printf("%d  ", *(ptr1+j+(i*col)));
        }
        printf("\n");
    }
  for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
              scanf("%d", ptr2+j+(i*col));
        }
    }
     for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
              printf("%d  ", *(ptr2+j+(i*col)));
        }
        printf("\n");
    }

   for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
               *(ptr3+j+(i*col))=*(ptr1+j+(i*col))+*(ptr2+j+(i*col));
        }
    }
 for (int i=0; i<row; i++){
   printf("FINAL ADDED MATRIX");
        for (int j=0; j<col; j++){
              printf("%d  ", *(ptr3+j+(i*col)));
        }
        printf("\n");
    }
 
  
      
}
