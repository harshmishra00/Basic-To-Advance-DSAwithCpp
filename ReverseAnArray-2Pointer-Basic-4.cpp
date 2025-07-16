#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[]={4,5,6,7,8,9};
    int n=6;
    
    reverse(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
