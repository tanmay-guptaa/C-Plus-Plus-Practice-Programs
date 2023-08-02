#include<iostream>
using namespace std;
int main()
{
    int even,n1,n2,i;
    cout<<"Enter The First Number In Range\n";
    cin>>n1;
    cout<<"Enter The Last Number In Range\n";
    cin>>n2;
    cout<<"The Even Numbers Between "<<n1<<" and "<<n2<<" are"<<endl;
    for(i=n1;i<=n2;i++)
    {
         even=i%2;
         if(even==0)
            cout<<i<<endl;
    }
    return 1;
}
