#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i = 0; i<=n ; i++)
    {
        for(int j = 1 ; j<=n-i ; j++ )
        {
            cout<<j;
        }
        for(int k = 1 ; k<=i ; k++ )
        {
            cout<<" ";
        }
        for(int l = 1 ; l<i ; l++)
        {
            cout<<" ";
        }
        for(int m = n ; m>i ; m--)
        {
            if((m-i)!=n)
            cout<<m-i;
        }
        cout<<endl;
        
    }
}