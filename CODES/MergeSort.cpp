
#include <iostream>
#include <vector>
using namespace std;
void conquer(vector<int>& arr, int s,int e){
  int m=(s+e)/2;
  int len1=m-s+1; 
  int len2=e-m;
  int *first= new int[len1];
  int *second= new int[len2];
  int k=s;
  for (int i=0;i<len1;i++ ){
    first[i]=arr[k++];
  }
  int k1=m+1;
  for (int i=0; i<len2; i++){
    second[i]=arr[k1++];
    
  }
  int index1=0;
  int index2=0;
  int arr_ind=s;
  while(index1<len1&&index2<len2){
  if (first[index1]<second[index2]){
    arr[arr_ind++]=first[index1++];
  }else{
    arr[arr_ind++]=second[index2++];
  }
    }
  while(index1<len1){
   arr[arr_ind++]=first[index1++];
    
  }
  while (index2<len2){
    arr[arr_ind++]=second[index2++];
  }
   

  
    
}
void mergeSort(vector<int>& arr, int s,int e){
    if (s>=e){
      return;
    }
    int mid= s +(e-s)/2;
        
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    conquer(arr, s,  e);
  }
  

int main(){
  vector<int> arr={7,4,8,2,1,6};
mergeSort(arr,0,5);
  for(int i=0; i<=5;i++){
    cout<<arr[i]<<endl;
  }
}
