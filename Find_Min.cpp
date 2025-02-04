#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find_min(int arr[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(min>arr[i]){
      min=arr[i];
    }
  }
  return min;
}
int main()
{
  int arr[5]={10,30,40,5,6};
  int m=Find_min(arr,5);
  cout<<m;
}