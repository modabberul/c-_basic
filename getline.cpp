/*
test case: t
print all string line

input:
3
hello i am modabberul
student
satcho

output:

hello i am modabberul
student
satcho


*/
#include "stdc++.h"
using namespace std;
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    string str;
    getline(cin,str);
    cout << str <<endl;


  }
}