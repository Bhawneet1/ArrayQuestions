#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }cout<<endl;
}
int main()
{
  vector<int> arr5={1,2,3,4,5};
  vector<int> arr6(arr5);
  print(arr6);
}