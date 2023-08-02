#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int n,a;
    cout<<"Enter The Limit"<<endl;
    cin>>n;
    a=sum(n);
    cout<<"The Sum Of "<<n<<" Natural Number Is "<<a;
    return 0;
}
int sum(int a)
{
    int b;
    if(b==1)
        return 1;
    else
    {
        b=a+sum(a-1);
        return b;
    }
}
