#include<iostream>
using namespace std;
int main()
{
    int a=29;
    int * ptr1;
    ptr1=&a;
    int **ptr2;//pointer to int*
    ptr2=&ptr1;
    cout<<***&ptr2<<endl;
    cout<<**ptr2<<endl;
    cout<<*ptr2<<endl;
    cout<<&**ptr2<<endl;
    cout<<&*ptr2<<endl;
    cout<<*&a<<endl;
    //cout<<&*a<<endl; ERROR
    cout<<&*ptr1<<endl;
    cout<<**&*ptr2<<endl;
    return 1;

}
