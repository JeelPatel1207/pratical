#include<iostream>
using namespace std;

void sum(int *a,int e)
{
    int s=0;
    for(int i=0;i<e;i++)
    {
        s=s+*(a+i);
    }
    cout<<"This is yor sum  : "<<s<<endl;
}

int main()
{
    int e;
    cout<<"Enter your number you sum : "<<endl;
    cin>>e;
    int *p=new int[e];
    cout<<"Enter your value : "<<endl;5
     for (int i=0;i<e;i++)
     {
        cin>>*(p+i);
     }

     sum(p,e);
    return 0;
}
