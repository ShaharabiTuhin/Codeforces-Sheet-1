#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int a,b,c,d,A,B,C,D,ans;
    cin >> a >> b >> c >> d ;
    A=a%100;
    B=b%100;
    C=c%100;
    D=d%100;
    ans=((A*B*C*D)%100);
    if(ans>=0&&ans<=9)
        cout << "0" << ans << endl;
    else
        cout << ans << endl;
}
