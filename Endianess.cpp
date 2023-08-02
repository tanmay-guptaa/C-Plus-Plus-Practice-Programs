#include<iostream>
using namespace std;
int main()
{
    int i;
    char *cp;
    i=10;
    /*Character pointer can read only 1 byte.
     **from the 4 bytes of integer*/
     cp=(char*)&i;
     /*
     **As character pointer points at lowest memory location it will read
     **10 if LSB is stored at lowest memory location and will read 0 if LSB
     **is stored at highest memory location*/
     if(*cp==10)
        cout<<"This is Little Endian System"<<endl;
     else
        cout<<"This is Big Endian System";
     return 1;
}
