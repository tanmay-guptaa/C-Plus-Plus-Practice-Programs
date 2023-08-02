#include<iostream>
using namespace std;
class Test
{
         public:
             void palindrome()
             {
                 int rem,rev=0,a,i;
                 cout<<"Enter The Number\n";
                 cin>>a;
                 for(i=0;a>0;i++)
                 {
                     rem=a%10;
                     rev=rev*10+rem;
                     a=a/10;
                 }
                 cout<<"The Reverse Number Is\n"<<rev;
                if(a==rev)
                    cout<<"\nPalindrome";
                 else
                    cout<<"\nNot a Palindrome";
             }
             void prime()
             {
                 int i,a;
                 cout<<"Enter The Number\n";
                 cin>>a;
                 for(i=2;i<=a;i++)
                 {
                     if(a%i==0)
                        break;
                 }
                 if(a==i)
                    cout<<"Prime";
                 else
                    cout<<"Not a Prime";
             }
             void EvenOdd()
             {
                 int a,i;
                 cout<<"Enter The Number\n";
                 cin>>a;
                 if(a%2==0)
                    cout<<"Even";
                 else
                    cout<<"Odd";
             }
};
int main()
{
    Test t;
    int c;
    cout<<"Enter Your Choice\n";
    cin>>c;
    switch(c)
    {
        case 1:t.palindrome();
        break;
        case 2:t.prime();
        break;
        case 3:t.EvenOdd();
        break;
        default:
            cout<<"Invalid Choice";
    }
    return 0;
}
