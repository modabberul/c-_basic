/*
print the reverse string.

input:
Muntaha

Output:
ahatnuM
*/
#include"stdc++.h"
using namespace std;
int main()
{
  string str;
  cin >> str;
  string str_re;
  for(int i= str.size()-1;i >=0; --i){
    str_re.push_back(str[i]);

  }
  cout << str_re <<endl;
}