#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findTwoSum(int arr[],int n,int target){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==target){
        cout<<arr[i]<<" "<<arr[j]<<endl;
      }
    }
  }
}
pair<int,int> pair_return(int arr[],int n,int target){
   pair<int,int>p = make_pair(-1,-1);
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]== target){
        p.first = arr[i];
        p.second = arr[j];
        return p;
      }
    }
   }
  return p;
}
int main(){
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=70;
  findTwoSum(arr,n,target);
  pair<int,int>p=pair_return(arr,n,target);
  cout<<p.first<<" "<<p.second<<endl;
}