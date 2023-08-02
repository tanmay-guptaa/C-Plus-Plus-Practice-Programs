#include<iostream>
using namespace std;
//VOID POINTER
 int main()
 {
     void *ptr;
     int a=1;
     float b=2;
     char c=65;
     ptr=&a;
   ptr=&b;
    ptr=&c;
    // *ptr=32;//ERROR
    //TO remove this error we use like example
     cout<<*(int*)ptr<<endl;
     cout<<*(float*)ptr<<endl;
     cout<<*(char*)ptr<<endl;
    //cout<<*(char*)ptr;
     //cout<<*ptr<<endl;//ERROR because void pointer cannot be dereferenced. So, it will show error like this('void*' is not a pointer to object).
     return 1;
 }
 //DANGLING POINTER
 /*int *show();
 int main()
 {
     int *ptr;
     ptr=show();
     cout<<*ptr;
     return 1;
 }
 int *show()
 {
    int a=12;
    return &a;
 }*/
