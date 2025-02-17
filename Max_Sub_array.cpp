#include<bits/stdc++.h>
using namespace std;
int naive_max_subarray(vector<int> &nums){
  int n=nums.size();
  int ans=INT_MIN;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++)
    {
      sum+=nums[j];
      ans=max(ans,sum);

  
    }
   
  }
  return ans;
}
int kadane_Algo(vector<int> &nums)
{ 
  //agar sum=0 to reset sum=0
  int ans=INT_MIN;
  int sum=0;
  int n=nums.size();
  for(int i=0;i<n;i++)
  {
     sum+=nums[i];
     ans=max(ans,sum);
     if(sum<0)
     {
      sum=0;
     }
  }
  return ans;
}
int main()
{
  vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
  int ans1=naive_max_subarray(nums);
  cout<<ans1<<endl;

  int ans2=kadane_Algo(nums);
  cout<<ans2<<endl;
}
