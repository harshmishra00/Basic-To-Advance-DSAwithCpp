#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter binary digit to convert it to decimal: ";
    cin>>n;
    int dec=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        n=n/10;
        dec=dec+(rem*pow);
        pow=pow*2;
    }
    cout<<"Decimal number is: "<<dec;
    return 0;
}
