#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v)
{
  int size = v.size();
  for (int i = 0; i < size; i++)
  {
    cout << v[i] << " ";
  }
}
void print2(vector<int> v)
{
  int size = v.size();
  for (int i = 0; i < size; i++)
  {
    cout << v.at(i)<< " ";
    // same as above
  }
}
int main()
{
  // vector diff from array as we donot need to specify the size and capacity doubles every time (dynamic)
  // contiguous memory
  // another way to dynamically assign to array
  // but here also we can't exceed size of array
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  vector<int> v;
  cout << v.size() << endl;
  cout << v.capacity() << endl;
  v.push_back(10);
  cout << v.size() << endl;
  cout << v.capacity() << endl;
  v.push_back(11);
  cout << v.size() << endl;
  cout << v.capacity() << endl;
  v.push_back(12);
  cout << v.size() << endl;
  cout << v.capacity() << endl;
  v.push_back(13);
  cout << v.size() << endl;
  cout << v.capacity() << endl;
  print(v);
  cout<<endl;
  v.pop_back();
  print(v);
  cout<<endl;
  v.pop_back();
  print2(v);
  cout<<endl;
  v.pop_back();
  print2(v);
  cout<<endl;
  return 0;

  // I want to clear the entire vector
  v.clear();
  print(v);

  v.push_back(1000);
  print2(v);
}