#include<iostream>
using namespace std;
void OnesComplement(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      arr[i]=1;
    }
    else if(arr[i]==1){
      arr[i]=0;
    }
  }
}
void TwosComplement(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  OnesComplement(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;

  if(arr[n-1]==0){
    arr[n-1]=1;
  }
  else if(arr[n-1]==1){
    arr[n-1]=0;
    for(int i=n-2;i>=0;i--){
      if(arr[i]==1){
        arr[i]=0;
      }
      else if(arr[i]==0){
        arr[i]=1;
        break;
      }
      }

    }
  }
int main(){
  int arr[]={1,0,1,0,1,0,1,0,1,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  // OnesComplement(arr,n);
  TwosComplement(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
}