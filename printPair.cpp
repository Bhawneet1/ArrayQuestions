#include<iostream>
using namespace std;
void pair_print(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i]<<" "<<arr[j]<<endl;
    }
  }
}
void print_unique_pairs(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){//we use i+1 because we don't want to compare the same element with itself and also no duplicate pairs
      cout<<arr[i]<<" "<<arr[j]<<endl;
    }
  }
}
void print_unique_with_same_elements(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){//we use i because we want to compare the same element with itself and also no duplicate pairs
      cout<<arr[i]<<" "<<arr[j]<<endl;
    }
  }
}
int main()
{
  int arr[]={10,20,30,40};
  int n=sizeof(arr)/sizeof(arr[0]);
  pair_print(arr,n);
  cout<<"---------------------------------------------"<<endl;
  print_unique_pairs(arr,n);
  cout<<"---------------------------------------------"<<endl;
  print_unique_with_same_elements(arr,n);
}