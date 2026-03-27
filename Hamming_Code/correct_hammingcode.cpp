//2. Write a program to correct the Hamming code if any error is found in any single bit and finally
//fetch the transmitted code after correction.


#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int check_parity(int n,int i,int code[])
{
    int p=0,k;
    for(int j=i;j<=n;j=k+i)
    {
        for(k=j;k<j+i && k<=n;k++)        
        {                    
            p++;
        }
    }
    if(p%2==0)
        return 0;        
    else
        return 1;        
}

void hamming_code(int num)
{
    int r=0,m=0,n,j=1,c,code[50];

    while((r+num+1)>(pow(2,r)))           
        r++;

    n=num; 
    cout<<"\nEnter the received code:";
    for(int i=n;i>0;i--)
    cin>>code[i];
    m=j=c=0;
    for(int i=1;i<=n;i++)
    {
        if(i==pow(2,m) && m<=r)
        {
            c=c+(pow(2,j)*check_parity(n,i,code));    
            j++;
            m++;
        }
    }
    if(c==0)
        cout<<"\nReceived word is correct.";
    else
    {
        cout<<"\nThere is error in bit "<<(n-c)+1<<"\nThe corrected code is:";
        if(code[c]==1)
            code[c]=0;
        else
            code[c]=1;
        for(int i=n;i>0;i--)
            cout<<code[i];
    }
}


int main()
{
    int num;

    cout<<"Enter the size of incorrect data";
    cin>>num;

    hamming_code( num);

    return 0;
}