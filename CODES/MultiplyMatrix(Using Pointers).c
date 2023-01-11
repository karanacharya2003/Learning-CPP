#include <stdio.h>

int main(){
      int r;
      int c;
      int a;
      
    scanf("%d%d%d", &r , &c,&a);
    int arr1[r][c];
    int arr2[c][a];
    int arr3[r][a];
   int *ptr1= &arr1[0][0];
int *ptr2=&arr2[0][0];
  int *ptr3=&arr3[0][0];
  
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
              scanf("%d", ptr1+j+(i*c));
         
        }
    }
   for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
              printf("%d  ", *(ptr1+j+(i*c)));
        }
        printf("\n");
    }
  for (int i=0; i<c; i++){
        for (int j=0; j<a; j++){
              scanf("%d", ptr2+j+(i*a));
        }
    }
     for (int i=0; i<c; i++){
        for (int j=0; j<a; j++){
              printf("%d  ", *(ptr2+j+(i*a)));
        }
        printf("\n");
    }
int sum=0;
for(int i=0; i<r;i++){
  for (int j=0; j<a; j++){
      for(int k=0; k<c; k++){
            sum=sum+(*(ptr1+k+i*c))*(*(ptr2+j+k*a));
        printf("%d\n",sum);
      }  
*(ptr3+j+i*a)=sum;
sum=0;
  }
      
}
  printf("FINAL MULTIPLIED MATRIX\n");
 for (int i=0; i<r; i++){
  
        for (int j=0; j<a; j++){
              printf("%d  ", *(ptr3+j+(i*a)));
        }
        printf("\n");
    }
 
  
      
}
