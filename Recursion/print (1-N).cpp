#include<bits/stdc++.h>
using namespace std;
void PrintNums(int i,int n)
{
    if(i>n)
    return;
    cout<<"  "<<i;
    PrintNums(i+1,n);
}
int main()
{
    int n;
    cin>>n;
    PrintNums(1,n);
    return 0;
}