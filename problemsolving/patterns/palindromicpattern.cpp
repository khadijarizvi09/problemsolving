#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i = 1 ; i <= n ;i++){
     
        for(int k = n - i ; k>=1 ; k--){
            cout<< " ";
        }
        int start = i;
        for(int j = 1 ; j<=i ; j++){
             cout<<start;
             start = start - 1;
            // cout<<" ";
        }
        int next = 2;
        for(int k = 1 ; k<i ; k++)
        {
        cout<<next;
        next = next+1;
//cout<<" ";
        }

        
        
        cout<<endl;
    }
}