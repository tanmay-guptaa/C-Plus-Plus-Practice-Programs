#include<iostream>
using namespace std;
//Pointer And Array
int main()
{
    int arr[6]={11,22,33,44,55,66};
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<*arr<<endl;
    //cout<<*arr++;//ERROR
    cout<<arr[0]<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+0)<<endl;
    cout<<(arr+4)<<endl;
    return 1;
}
//Subscripting Pointer
/*int main()
{
    int arr[5]={11,22,33,44,55};
    int *ptr;
    ptr=arr;//ptr=&arr[0];
    cout<<*(ptr+1)<<endl;//arr[i];
    cout<<ptr[1]<<endl;//Subscripting Pointer
    return 1;
}*/
