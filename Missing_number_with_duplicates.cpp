#include<bits/stdc++.h>
using namespace std;
void missing(vector<int> &nums)
{
  int n=nums.size();
  for(int i=1;i<n;i++)
  {
    int index=abs(nums[i]);
    
    if(nums[index] >0)
    {
      nums[index] *=-1;
    }
  }
  for(int i=0;i<nums.size();i++)
  {
     cout<<nums[i]<<" "; 
  }cout<<endl;
  int missing=-1;
  for(int i=1;i<n;i++)
  {
    if(nums[i]>0)
    {
      missing=i;
      break;
    }
  }
  cout<<"Missing number is "<<missing<<endl;
}
int main()
{
  vector<int> nums={1,3,5,3,4};
  nums.insert(nums.begin(),737);
  missing(nums);
  
}