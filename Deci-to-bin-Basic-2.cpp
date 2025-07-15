#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number to convert to binary: ";
    cin>>n;
    int bin=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        n/=2;
        bin+=(rem*pow);
        pow=pow*10;
    }
    cout<<"Binary: "<<bin;
    return 0;
}
