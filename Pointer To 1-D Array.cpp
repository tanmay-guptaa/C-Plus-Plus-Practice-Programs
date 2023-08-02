#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr;
    ptr=arr;
    cout<<ptr<<endl;
    cout<<&arr<<endl;
    cout<<&ptr<<endl;
    cout<<arr;
   /* ptr=&arr;
    cout<<ptr; Error because &arr shows the address of the whole array*/
    return 0;
}
