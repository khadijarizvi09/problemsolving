#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i = 1; i<=n ; i++)
    {
        for(int j = 1 ; j<=i; j++ )
        {
            cout<<j;
        }
        for(int k = 1 ; k<=n-i ; k++ )
        {
            cout<<" ";
        }
         for(int l = 1 ; l<=n-i ; l++)
        {
            cout<<" ";
        }
        int start = i;
         for(int m = 1 ; m<=i ; m++)
        {
          cout<<start;
          start = start - 1;
        }
        
      cout<<endl;  
    }
}