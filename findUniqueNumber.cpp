#include<iostream>
using namespace std;
int findUniqueNumber(int arr[],int n){
  int ans=0;

  // O(N) -> Time Complexity
  // O(1) -> Space Complexity (as only one variable is used that is ans)
  for(int i=0;i<n;i++){
    ans=ans^arr[i];
  }
  return ans;
}
int main()
{
  int arr[]={10,20,30,40,50,10,20,30,40};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans=findUniqueNumber(arr,n);
  cout<<ans;
}