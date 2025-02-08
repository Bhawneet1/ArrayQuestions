#include<bits/stdc++.h>
using namespace std;
void triplet(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
       for(int k=j+1;k<n;k++){
        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
       }
    }
  }
}
int main(){
  int arr[]={10,20,30,40,50};
  int n =sizeof(arr)/sizeof(arr[0]);
  triplet(arr,n);
}



