
#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& arr, int s,int i){
    if (s<i){
      return;
    }

    int temp=arr[i];
    int j=i-1;
    for (; j>=0; j--){
     if (arr[j]>temp){
       arr[j+1]=arr[j];  
     }
    else{
      break;
      }  
      }
    arr[j+1]=temp;
    insertionSort(arr,s,i+1);
  }
  

int main(){
  vector<int> arr={7,4,8,2,1};
insertionSort(arr,4,1);
  for(int i=0; i<=4;i++){
    cout<<arr[i]<<endl;
  }
}
