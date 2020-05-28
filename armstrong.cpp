// WAP to find that a given number is armstrong or not
#include<bits/stdc++.h>
using namespace std;
void armstrong(int num){
    int rev  , a = num , rem ;
    while(num!=0){
        rem = num % 10 ;
        rev = rem * rem * rem ;
        num = num/10;
    }
    if(a == rev){
        cout<<"The given number is Armstrong"<<endl;
    }
    else {
        cout<<"The given number is not armstrong"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the nmber "<<endl;
    cin>>n;
    armstrong(n);
    return 0;
}