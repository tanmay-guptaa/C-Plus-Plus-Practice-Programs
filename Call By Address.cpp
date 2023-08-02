#include<iostream>
using namespace std;
void swap(int *p, int *q)
{
 int swap;
 swap=*p;
 *p=*q;
 *q=swap;
}
int main()
{
 int x=12, y=13;
  cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
 swap(&x, &y);  // passing address to formal arguments because they are pointers
 cout<<"Value of x is: "<<x<<endl;//13
 cout<<"Value of y is: "<<y<<endl;//12
 return 0;
}

