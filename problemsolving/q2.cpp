#include <iostream>
using namespace std;
int main()
{
    int a , b , c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater";
        }
        else 
        {
            cout<<"b is greater";
        }
    }
    else if (b>c){
        cout<<"b is largest";
    }
        else 
        cout<<" c is largest";

}