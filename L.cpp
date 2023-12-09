#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char f1[10000000],s1[10000000],f2[10000000],s2[10000000];
    cin >> f1 >> s1 >> f2 >> s2 ;
    int y = strcmp(s1,s2);
    if( y==0 )
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT";
    return 0;
}
