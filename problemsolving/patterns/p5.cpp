#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i = 1 ; i <=n ;i++)
    {

        //space triangle
        for(int k = n - i ; k>=1 ; k--){
            cout<< " ";
        }
        //first triangle
        for (int j = 1 ; j <=i  ; j++)
        {
            cout<<i+j-1;
        }
        for ()
     cout<<endl;


      
     
    }
    return 0 ;
}