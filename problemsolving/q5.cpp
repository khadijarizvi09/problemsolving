#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,k ,j,d;
    cin>>a>>b;
    j = pow(a,b);
    cin>>k;
    while(k--)
    {
       d = j%10;
       j = j/10; 
    }
    cout<<d;
}