#include<iostream>
#include<algorithm>
using namespace std;
void Sum_2(int arr[],int n,int target){
  int i=0;
  int j=n-1;
  sort(arr,arr+n);
  while(i<j){
    if(arr[i]+arr[j]<target){
      i++;
    }
    else if(arr[i]+arr[j]>target){
      j--;
    }
    else{
      cout<<arr[i]<<" "<<arr[j]<<endl;
      i++;
      j--;
    }
  }
}
int main()
{
  int arr[]={10,30,20,50,40};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=50;
  Sum_2(arr,n,target);
}