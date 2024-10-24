/*
add "A" at the end of string
*/

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    //int n = s.size();
    for(int i =0; i < 1; i++){
        s.push_back('A');
    }
    cout << s << endl;
}