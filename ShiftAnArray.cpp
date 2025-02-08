#include<iostream>
using namespace std;
void Shift(int arr[],int n,int k){
  int finalShift =k % n;
  if(finalShift == 0)
  {
    return;
  }
  int temp[100];
  int index=0;
  // step1:store last k elements in temperary elements
  for(int i=n-finalShift;i<n;i++)
  {
    temp[index]=arr[i];
    index++;
  }
  // step2:shift other elements by k
  for(int i=n-1;i>=0;i--)
  {
    if(i-finalShift >=0){
      arr[i]=arr[i-finalShift];
    }
    
  }
  //step3: store the last elements in starting index of array
  for(int i=0;i<finalShift;i++)
  {
    arr[i]=temp[i];
  }
}
int main()
{
  int arr[]={10,20,30,40,50,60}; 
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=2;
  Shift(arr,n,k); 
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}