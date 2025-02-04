#include<iostream>
using namespace std;
void CountZeros(int arr[],int n){
 int count0=0;
 int count1=0;
 for(int i=0;i<n;i++){
  if(arr[i]==0){
    count0++;
  }
  else if(arr[i]==1){
    count1++;
  }
 }
 cout<<count0<<" "<<count1<<endl;
}
int main()
{
  int arr[5]={1,0,0,0,1};
  CountZeros(arr,5);
}