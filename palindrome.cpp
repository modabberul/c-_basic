/*
Example: lol, pop, radar, madam, etc.
test case t

input:
2
lol
abcv

Output:
Yes
No
*/

#include"stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        string re_s;
        cin >> s;
        for(int i= s.size() - 1; i >= 0; --i){
            re_s.push_back(s[i]);
    

        }
        if(s == re_s){
            cout << "Yes" << endl;
        }
         else{
            cout << "No" << endl;
         }
    }
}