#include<iostream>
using namespace std;
void bubbleSort(int arr[], int e){
        if (e==0){
          return;
        }
   
       for (int i=0; i<e;i++){
        if (arr[i]>arr[i+1]){
          swap(arr[i],arr[i+1]);
        }
      }
  
      bubbleSort(arr,  e-1);
}
int main(){
  int arr[5]={11,15,56,2,1};
  bubbleSort(arr,4);
  for(int i=0; i<=4;i++){
    cout<<arr[i]<<endl;
  }
}
