#include <iostream>
using namespace std;
int partition(int arr[], int s, int e){    
  int count=0;
  for (int k=s+1; k<=e; k++){
    if (arr[k]<arr[s]){
      count++;
    }
  }
  int pi =count + s;
  swap(arr[s], arr[pi]);
  int i=s , j=e;
  while (i<pi&& j>pi){
    while (arr[pi]>arr[i]){
      i++;
      
    }
    while (arr[pi]<arr[j]){
      j++;
      
    }
    if(i<pi&& j>pi){
      swap(arr[i],arr[j]);
    }
  }
  
  
  return pi;
}
void quickSort(int arr[],int s,int e){
      if (s>=e){
        return;
      }
    int p=partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
  int arr[10]={1,9,5,2,3,8,7,15,12,11};
  quickSort(arr,0,9);
  
  
  
}
