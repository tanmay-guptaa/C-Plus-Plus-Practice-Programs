#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
//PROGRAM-1
/*int main()
{
    int a=1;
    char *x;
    x=(char*)&a;
    *(x+1)=1;
    cout<<a;
    return 1;
}*/
//PROGRAM-2
/*#define a 4+8
int main()
{
    int i=a*a*a*a;
    cout<<i;
    return 1;
}*/
//PROGRAM-3
/*int main()
{
   int x=0,k;
   while(+(+x--)!=0)
   {
       x++;
   }
   cout<<x;
   return 1;
}*/
//PROGRAM-4(Output--Special Characters)
/*int top=0;
int fun1()
{
    char a[]={'a','b','c','d'};
    return a[top++];
}
int main()
{
    char b[10];
    char ch2;
    int i=0;
    while(ch2=fun1()!='(')
    {
        b[i++]=ch2;
    }
    cout<<b;
    return 1;
}*/
//PROGRAM-5(Output--91)
/*int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11));
}
int main()
{
    int r;
    r=fun(95);
    cout<<r;
    return 1;
}*/
//PROGRAM-6(Output--amanpj)
/*int main()
{
    int i;
    char s[20]="amanpj";
    for(i=0;i<strlen(s);i++)
    {
        if(strchr("codeguyscode",s[i]))//strchr is used to check the occurence of character in a string.
        strcpy(s+i,s+i+1);
    }
     cout<<s;
     return 1;
}*/

//PROGRAM-7(Output--Unequal)
/*int main()
{
    char arr1[]="abcd";
    char arr2[]="abcd";
    if(arr1==arr2) // the arr1 and arr2 will pick up the address to compare not th e string
        cout<<"Equal\n";
    else
        cout<<"Unequal\n";
    return 1;
    //arr1 and arr2 provide the addresses of same string and addresses will be always different/unequal.
    // The right way to compare the string is:
     //compare using strcmp() function defined under string.h header file
}*/

//PROGRAM-8(Output--94)
/*int main()
{
    int arr[5]={23,12,51,94,5};
    int p;
    p=(arr+1)[2];//also can be written as *(arr+1+2);
    cout<<p;
    return 1;
}*/

//PROGRAM-9(Ouptut--Loop Terminates as zero is considered as false value in any case.)
/*int main()
{
    int a=1;//But if a=0 then, loop gets terminated.
    while(a++)
    {
        a=1;
        cout<<"Share This Page\n"<<a;
        a--;
    }
    return 1;
}*/
//PROGRAM-10
/*int main()
{
    int i=0,count=0;
    for(i=0;i<5;i++);//As semicolon doesn't allows program control to execute the body so, count++ is not considerd as for loop statement.
                    //so the answer is 1.
    {
        count++;//1
    }
    cout<<count;
    return 1;
}*/

//PROGRAM-11(Output--DEF)
/*char *function1(char *ptr)
{
    ptr+=3;
    return ptr;
}
int main()
{
    char *x="ABCDEF", *y;
    y=function1(x);
    cout<<y;
    return 1;
    /*Character pointer x points to string "ABCDEF" and it is passed to the function which is function1.
     **fucntion1 increments that pointer by 3: ptr+=3 is nothing but ptr=ptr+3.
     **So, ptr skip 3 bytes in "ABCDEF" and points to DEF.*/
}*/

//PROGRAM-12(Output--Some Address)
/*int main()
{
    printf("%d",main);//it prints the address of main because it is a function and "function always prints the address."
    return 1;
}*/
