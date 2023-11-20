#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<"Enter the two number:"<<endl;
        int a,b;
        cin>>a>>b;
        cout<<"The gcd is = "<<gcd(a,b)<<endl;
    }
}
