#include<bits/stdc++.h>
using namespace std;
void printNums(int i, int n)
{
    if(i<n)
    return;
    cout<<" "<<i;
    printNums(i-1,n);
}
int main()
{
    int n;
    cin>>n;
    printNums(n , 1);
    return 0;
}