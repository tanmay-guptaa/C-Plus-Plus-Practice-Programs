#include<iostream>
using namespace std;
inline int square(int);
int main()
{
    int num,res;
    cout<<"Enter The Number"<<endl;
    cin>>num;
    res=square(num);
    cout<<"Square Is "<<res;
    return 0;
}
int square(int a)
{
    int p;
    p=a*a;
    return(p);
}
