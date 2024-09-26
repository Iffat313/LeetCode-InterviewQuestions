/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> 
using namespace std;

int main()
{
    //problem: reverse a string: solution 1;
   string name = "Iffat";
   string reverse;
  // name = name + 'r'; //can append a char to a string 
  for(int i = 4; i>=0; i--){
      reverse = reverse + name[i];
  }
  cout << reverse; */
  
  //solution 2;
  vector<char>list;
  string name;
  string reverse;
  int i = 0;
  cin >> name;
  while(name!=""){
      if((name[i]>=97 && name[i]<=122) || (name[i]>=65 && name[i]<=90)){
          list.push_back(name[i]);
      }
      else{
          break;
      }
      i++;
  }
  
  for(int i = list.size()-1; i>=0; i--){
      reverse = reverse + list[i];
  }
  cout << reverse;
    return 0;
}