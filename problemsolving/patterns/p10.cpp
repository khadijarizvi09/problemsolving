#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i = n ; i>=1 ; i--)

    {
        for(int k = i - 1 ; k<n ; k++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j<=2*i-1 ; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i = 2 ; i<=n ; i++)

    {
        for(int k = n-i; k>=i; k--)
        {
            cout<<"  ";
        }
        for(int j = 1 ; j<=2*i-1 ; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
