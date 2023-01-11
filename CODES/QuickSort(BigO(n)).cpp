#include <iostream>
using namespace std;
int partition(int arr[], int s, int e){    
  int  start=s+1;
  int pivot=arr[0];
 while(start<=e){
   if (start==e){
     if(arr[start]>pivot){
        e--;
     }
     else{
       start++;
     }
   }
  else if (arr[start]>pivot&& arr[e]<pivot){
    swap (arr[start],arr[e]);
    start++;
    e--;
  }
   else if(arr[start]<pivot){
     start++;
   }
   else if(arr[e]>pivot){
     e--;
   }
 }
  swap(arr[e],pivot);
  return e;
  }
int main(){
  int arr[5]={6,10,9,4,5};
  int ans=partition(arr, 0, 4);
  cout<<ans;
}
