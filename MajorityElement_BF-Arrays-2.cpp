#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={3,4,5,3,8,3,3};
    
    for(int val:vec){
        int count=0;
        for(int ele:vec){
            if(val==ele){
                count++;
            }
        }
        if(count>7/2){
            cout<<val;
            break;
        }
    }
    

    return 0;
}
