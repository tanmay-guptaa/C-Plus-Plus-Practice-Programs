#include<iostream>
using namespace std;
void inputData(int[],int);
void printData(int*,int);
int main()
{
    int arr[20],size;
    cout<<"Enter The Size Of Array"<<endl;
    cin>>size;
    inputData(arr,size); //inputData(value of arr,size of arr);
    printData(arr,size); //printData(same as above);
    return 1;
}
void inputData(int a[],int n)
{
    int i;
    cout<<"Enter"<<n<<"Array Elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];//cin>>*(arr+i);
    }
}
void printData(int*ptr,int n) //int*ptr=arr;
{
    int i;
    cout<<"The Arrray Elements Are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<"\t";//cout<<*(ptr+i);
    }
}
