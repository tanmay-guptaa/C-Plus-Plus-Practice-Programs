#include<iostream>
using namespace std;
void Addition(int=0,int=0,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter The All Numbers"<<endl;
    cin>>a>>b>>c;
    Addition();//If it is not like that void Addition(int=0,int=0,int=0); it will show too few arguments error.
    Addition(a);
    Addition(a,b);
    Addition(b);
    Addition(c);
    Addition(b,c);
    Addition(a,b,c);
    return 1;
}
void Addition(int a,int b,int c)
{
    cout<<" Sum "<<a+b+c<<endl;
}
