#include <iostream>
using namespace std;
int main()
{
    int arr[]={4,5,6,8,9,11};
    int target=20,n=6;
    int st=0, end=n-1;
    while(st<end){
        if(arr[st]+arr[end]>target){
            end--;
        }
        else if(arr[st]+arr[end]<target){
            st++;
        }
        else{
            cout<<st<<" "<<end;
            break;
        }
    }

    return 0;
}
