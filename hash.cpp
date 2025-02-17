#include<bits/stdc++.h>
using namespace std;
int main()
{
  //hash map has key value pair 
  //key kai corresponding value
  //key always unique
  //Searching ko aasan karta hai
  unordered_map<int,int> table;//key,value datatype

  //insertion
  table[1] = 53;//rollno.1 ko desk 53 ko map kardiya
  table[2] = 54;
  table[3] = 55;
  table[2] = 56;//update hogya par multiple entries nahi hongi

  //iterate
  //iterate over 3 entries
  //map mai iterate karne kai liye make iterator
  //One key value pair is one entry
  //we are creating table of content
  unordered_map<int,int>::iterator it;
  for(it=table.begin();it!=table.end();it++)
  {
    int key=it->first;
    int value=it->second;
    cout<<"Key "<<key<<" "<<"value "<<value<<endl;
  }

  for(auto it : table){
    int key = it.first;
    int value=it.second;
    cout<<"Key "<<key<<" "<<"value "<<value<<endl;
  }

  //find is O(1)
  if(table.find(2) !=table.end()){
      //Found
      //2 is key
      int value = table[2];
      cout<<value<<endl;
  }


  else
  {
    //Not found
  }

  // deletion
  table.erase(1);
  for(auto it : table){
    int key = it.first;
    int value=it.second;
    cout<<"Key "<<key<<" "<<"value "<<value<<endl;
  } 
  //find 1
  if(table.find(1) !=table.end()){
    //Found
    //2 is key
    int value = table[2];
    cout<<value<<endl;
}


else
{
  //Not found
  cout<<"Not found"<<endl;
}
}