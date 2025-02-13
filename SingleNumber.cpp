#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Single_number(vector<int> arr)
{
  sort(arr.begin(),arr.end());
  int i=0;
  int n=arr.size();
  int ans=-1;
  while(i<n)
  {
    if((i+1)<n && arr[i]==arr[i+1])
    {
      i+=2;
    }
    else{
      ans=arr[i];
      break;
    }
  
  }
  return ans;
}
int Single_number_optimized(vector<int> arr)
{
  int ans=0;
  for(int i=0;i<arr.size();i++)
  {
    ans^=arr[i];
  }
  return ans;
}

int Single_number_hash(vector<int> arr)
{
  unordered_map<int,int> hash;
  for(int i=0;i<arr.size();i++)
  {
    hash[arr[i]]++;
  }
  for(int i=0;i<arr.size();i++)
  {
    if(hash[arr[i]] ==1)
    {
      return arr[i];
    }
  }
}
int main()
{
  vector<int> arr{1,2,3,4,1,2,3};
  int ans = Single_number(arr);
  cout<<ans<<endl;

  int ans1 = Single_number_optimized(arr);
  cout<<ans1<<endl;

  int ans2 = Single_number_hash(arr);
  cout<<ans2<<endl;
}