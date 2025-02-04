#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_min(int arr[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
      if(max<arr[i]){
        max=arr[i];
      }
  }
  return max;
}
int main()
{
  int arr[5]={60,30,40,90,10};
  int m=find_min(arr,5);
  cout<<m;
}