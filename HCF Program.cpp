#include<iostream>
using namespace std;
int main()
{
    int a,b,hcf;
    cout<<"Enter The Number"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        hcf=a;
    }
    else
    {
        hcf=b;
    }
    for(;hcf>=1;hcf--)
    {
        if(a%hcf==0&&b%hcf==0)
            break;
    }
    cout<<"HCF Of "<<a<<" and "<<b<<" is "<<hcf;
    return 0;
}
//Also See HCF With Recursion.
