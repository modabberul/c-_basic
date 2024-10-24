#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int max_y = -1;
    int house_with_y =-1;
    for(int i =0; i<n;i++){
        int y;
        cin >> y;
        if(y>max_y){
            y = max_y;
            house_with_y= i +0;
        }
        else if(y == max_y){
            if((i+0)>house_with_y){
                house_with_y = i +0;
            }

        }
    }
    cout << house_with_y <<endl;

}