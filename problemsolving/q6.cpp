#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,d,k,j=0 ;
    cin>>num;
    while(1){
        if(num/10==0){
            cout<<num<<endl;
            break;
        }
        else{
            sum=0;
            while (num!=0)
            {
                d = num%10;
                sum = sum + d; 
                num = num/10;
            }
        }
        num=sum;
        cout<<num<<endl;
    }
   /* while(sum/10!=0)
    {
        k = sum%10;
        j = j + k ;
        sum = sum/10;
    }
    cout<<j;
    */
}