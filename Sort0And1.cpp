#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Sort0And1(int arr[], int n)
{
  int count0 = 0;
  int count1 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      count0++;
    }
    else if (arr[i] == 1)
    {
      count1++;
    }
  }
  for (int i = 0; i < count0; i++)
  {
    arr[i] = 0;
  }
  for (int i = count0; i < n; i++)
  {
    arr[i] = 1;
  }
}
void Sort2(int arr[],int n){
  int i=0;
  int j=n-1;
  while(i<j){
    if(arr[i]==0){
      i++;
    }
    else if(arr[j]==1){
      j--;
    }
    else if(arr[i]==1 && arr[j]==0){
      swap(arr[i++],arr[j--]);
    }
  }
}
int main()
{
  int arr[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  // M-1 (Counting 0s and 1s)
  // Sort0And1(arr, n);
  
  
  // M-2(STL function sort)
  // sort(arr, arr + n);

  //M-3(Two Pointer Approach -> Dutch National Flag Algorithm)
  Sort2(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}