#include<stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;

    for(i=1;i<=7;i++)
    {
        cout<<"\n";
        for(j=i;j<=7;j++)
        {
            cout<<"\t"<<j;
        }
    }
    for(i=1;i<7;i++)
    {
        cout<<"\n";
        for(j=7-i;j<=7;j++)
        {
            cout<<"\t"<<j;
        }
    }
    return 0;
}
