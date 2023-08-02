#include<iostream>
using namespace std;
int GCD(int,int);
int main()
{
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    int hcf;
    hcf=GCD(a,b);
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<hcf;
    return 0;
}
int GCD(int a,int b)
{
    int hcf;
    if(a==b)
        return a;//return b;
        if(a%b==0)
            return b;
            if(b%a==0)
                return a;
            if(a>b)
            {
                hcf=GCD(a%b,b);
                return hcf;
            }
            else
            {
                hcf=GCD(a,b%a);
                return hcf;
            }

}
