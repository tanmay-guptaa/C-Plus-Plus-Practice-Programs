#include<iostream>
using namespace std;
int main()
{
    int res,r=20;
    int *ptr;
    ptr=&r;
    res=*ptr++;
    /*res=(*(ptr++)); OR res=*ptr;
                     *ptr=*ptr+1;*/
     cout<<r<<endl;
     cout<<*ptr<<endl;
     cout<<res<<endl;
            return 0;
}
