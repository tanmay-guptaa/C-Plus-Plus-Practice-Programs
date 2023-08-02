#include<iostream>
using namespace std;
void Swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter The Numbers"<<endl;
    cin>>a>>b;
    Swap(a,b);
    cout<<"First Number"<<a<<endl;//2
    cout<<"Second Number"<<b<<endl;//1
    return 0;

}
void Swap(int&p,int&q)
{
    int r;
    r=p;
    p=q;
    q=r;
    cout<<"First Number"<<p<<endl;//2
    cout<<"Second Number"<<q<<endl;//1
}
