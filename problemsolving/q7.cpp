#include <iostream>
using namespace std;
int pow(int n , int b)
{
    if(b==0)
    return 1;
    else
    return n *pow(n,b-1);
}
int sum(int n){
int d,sum=0;
while(n!=0)
{
 d = n%10;
 sum = sum + d;
 n=n/10;
}
return sum;
}

int main()
{
    int n,d,count = 0,k,j,num1,num2,l,m;
    cin>>n;
    int t=n;
    while(n!=0)
    {
        d = n%10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;
    if(count%2 != 0)
    {
        k= count/2;
        j = (count/2) +1;
        cout<<k<<" "<<j<<endl;
        num1 = pow(10,k);
        num2 = pow(10,j);
        cout<<num1<<" "<<num2<<endl;
        l = sum(t%num1);
        m = sum(t/num2);
        cout<<l<<" "<<m; 
        
        
    }
}
