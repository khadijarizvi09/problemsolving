#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {3,6,7,8,9};
    int c[10] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<10 && j<10)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
            k++;

        }
        else if(a[i] == b[j])
        {
            i++;
            j++;
        }
        else 
         {
            c[k] = b[j];
            j++;
            k++;

         }

    }
    while(i<10)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while(j<10)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    for(int s =0 ; s<20 ; s++)
    {
        cout<<c[s]<<" " ;
    }
    return 0;

}