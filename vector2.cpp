#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
  for(int i=0;i<v.size();i++)
  {
    cout<<v.at(i)<<" ";
  }cout<<endl;
}
int main()
{
  //Intializations
  vector<int> v;
  vector<int> v2(5,-1);//initialize 5 size array with -1
  print(v2);
  vector<int> v3={1,2,3,4,5};
  print(v3);
  
  vector<int> v4{1,2,3,4};
  print(v4);
  
}