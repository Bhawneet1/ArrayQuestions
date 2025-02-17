#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Rotate(vector<vector<int>> &mat)
{
  int row=mat.size();
  int col=mat[0].size();
  for(int i=0;i<row;i++)
  {
    for(int j=i;j<col;j++)
    {
      swap(mat[i][j],mat[j][i]);
    }
  }
  //row-wise reverse
  for(int i=0;i<row;i++)
  {
    reverse(mat[i].begin(),mat[i].end());
  }
  
}
int main()
{
  vector<vector<int>> mat{
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  Rotate(mat);
  for(int i=0;i<mat.size();i++)
  {
    for(int j=0;j<mat[0].size();j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}