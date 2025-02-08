#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[],int n){
  int i=0;
  int j=n-1;
  while(i<j){
    swap(arr[i++],arr[j--]);
  }
}
int main(){
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr)/sizeof(arr[0]);
  // M-1
  // ReverseArray(arr,n);

  // M-2 (STL function)
  reverse(arr,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}