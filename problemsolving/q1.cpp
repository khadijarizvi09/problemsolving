#include <iostream>
using namespace std;
int main()
{
    int basicsalary;
    cin>>basicsalary;
    char grade;
    cin>>grade;
    float hra = 0.2  * basicsalary;
    float da = 0.5 * basicsalary;
    float pf = 0.11 * basicsalary;
    int allow;
    if(grade = 'A')
    {
        allow = 1700;
    }
    else if (grade = 'B')
    {
        allow = 1500;
    }
    else
    {
      allow = 1300;
    }
    int totalsalary = basicsalary + hra + da + allow - pf;
    cout<<totalsalary;
    return 0 ;
}