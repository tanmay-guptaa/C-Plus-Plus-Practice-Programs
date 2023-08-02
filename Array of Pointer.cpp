#include<iostream>
using namespace std;
int main()
{
    int (*ptr)[3];//Pointer To 1-D array
    int arr[3];
    ptr=&arr;
   // ptr=arr;//Error : ptr cannot store arr because it is pointer array which holds base address of arr[0]
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    int *ptrr=arr;/*int *ptrr;
                 ptrr=arr;*/
        //ptrr=&arr;/*Error: ptrr is oridnary pointer and &arr denotes address of whole array which an oridnary pointer can't store*/
         cout<<ptrr;
         return 0;
}
/*IMPORTANT: The size of both array should be same otherwise it will not be convertible in any case and creates Error*/
