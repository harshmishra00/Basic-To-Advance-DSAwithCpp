#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    while(n>0){
        f=f*n;
        n-=1;
    }
    return f;
}

int main() {
    int n,r;
    cout<<"Enter the coficientrs like n r: ";
    cin>>n>>r;
    int m=fact(n);
    int x=fact(n-r);
    cout<<"Cofficient answer is : "<<m/((x)*fact(r));
    
    

    return 0;
}
