#include <bits/stdc++.h>
using namespace std;
void One_complement(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == 0)
    {
      arr[i] = 1;
    }
    else if (arr[i] == 1)
    {
      arr[i] = 0;
    }
  }
}
void Two_complement(vector<int> &arr)
{
  cout << "Before one's complement " << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  One_complement(arr);

  cout << "After one's complement " << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int n = arr.size();
  if (arr[n - 1] == 0)
  {
    arr[n - 1] = 1;
  }
  else if (arr[n - 1] == 1)
  {
    arr[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
      if (arr[i] == 1)
      {
        arr[i] = 0;
      }
      else
      {
        arr[i] = 1;
        break;
      }
    }
  }
  cout << "After two's complement" << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

vector<int> two_complement_2(vector<int> &arr)
{
  int n = arr.size()-1;
  vector<int> twocomp(n+1, 0);
  // flip the bits
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      twocomp[i] = 1;
    else if (arr[i] == 1)
      twocomp[i] = 0;
  }
  int carry = 1;
  for (int i = twocomp.size() - 1; i >= 0; i--)
  {
    int sum = twocomp[i] + carry;
    twocomp[i] = sum % 2;
    carry = sum / 2;

    if (carry == 0)
    {
      break;
    }
  }
  if (carry)
  {
    twocomp.insert(twocomp.begin(), carry);
  }
  return twocomp;
}
int main()
{
  vector<int> arr{0, 1, 0, 1, 1, 0};
  Two_complement(arr);
  vector<int> ans=two_complement_2(arr);
  for(int i=0;i<ans.size();i++)
  {
    cout<<ans[i]<<" ";
  }
}