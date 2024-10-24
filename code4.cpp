#include"stdc++.h"
using namespace std;
int main()
{
    long int x,p,a;
    cin>>x>>p;
    vector<int> data(x);
    for(int i=0;i<x;i++){
        cin >> data[i];

    }
    if(find(data.begin(),data.end(),p) != data.end()){
        cout << "yes";


    }
}