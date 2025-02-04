#include<iostream>
using namespace std;
bool Search(int arr[],int n,int target){
  for(int i=0;i<n;i++){
     if(arr[i]==target){
      return true;
     }
  }
  return false;
}
int main()
{
  int arr[]={10,20,30,40,50};
  if(Search(arr,5,60)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }
}