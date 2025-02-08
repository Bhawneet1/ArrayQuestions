#include<iostream>
#include<vector>
using namespace std;
void print(vector<char> v){
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }cout<<endl;
}

void print_2(vector<char> v)
{
  cout<<"Printing"<<endl;
  for(auto it:v){//for each loop
    cout<<it<<endl;
  }
}
int main()
{
  vector<char> c;
  c.push_back('a');
  c.push_back('b');
  c.push_back('c');
  print(c);
  cout<<"first element: "<<c[0]<<endl;
  cout<<"Last element: "<<c[c.size()-1]<<endl;

  cout<<"Mathod-2 for first and last element "<<endl;

  cout<<c.front()<<endl;
  cout<<c.back()<<endl;
  
  print_2(c);

}