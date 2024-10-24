/*
Sum of Digits
You're given an integer N. Write a program 
to calculate the sum of all the digits of N.

Input Format
The first line contains an integer T, the total
 number of testcases. Then follow T lines, each 
 line contains an integer N.

Output Format
For each test case, calculate the sum of digits
 of N, and display it in a new line.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
1000000
1≤N≤1000000
Sample 1:
Input:
3 
12345
31203
2123

Output:
15
9
8
*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int sum =0;
    while(n>0){
        int last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;

    }
    cout << sum << endl;
    }
}