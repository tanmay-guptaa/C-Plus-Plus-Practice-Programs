#include<iostream>
using namespace std;
int main()
{
    int a,b,lcm;
    cout<<"Enter The Number"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        lcm=a;
    }
    else
    {
        lcm=b;
    }
    for(;lcm<=a*b;lcm++)
    {
        if(lcm%a==0&&lcm%b==0)
            break;
    }
    cout<<"LCM Of "<<a<<" and "<<b<<" is "<<lcm;
    return 0;
}
