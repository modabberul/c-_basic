/*
Create a pattern like this

input:
2
3
5

output:
*
**
***

*
**
***
****
*****



output can verify t times testcases at once

*/
#include<iostream>
using namespace std;
int main()
{
 
 int t;
 cin>>t;
 for(int i =1;i <=t;i++){
    int n;
 cin >> n;
 for(int i =1; i<=n;i++){
    for(int j =1; j<=i;j++){
        cout << "*";
    }
    cout << endl;
 }
 }
 
}