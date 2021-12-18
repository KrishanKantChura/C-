#include <iostream>
using namespace std;
class complex 
{
    int r, i;
    public:
    void getdata ()
    {
        cout<<"Enter Real & Img part of complex :" ;
        cin>>r>>i;
    }
    void display()
    {    
        cout<<"Real & Img part is : ";
        cout<<r<<"+i"<<i<<endl;
    }
    friend complex operator +(complex , complex);
};

complex operator +(complex a , complex b )
{
    complex temp;
    temp.r = b.r+a.r;
    temp.i = a.i+b.i;

    return temp;
}
int main ()
{
    complex c1 , c2 , c3;
    c1.getdata();
    c2.getdata();

    c1.display();
    c2.display();

    c3=c1+c2;
    c3.display();   

    return 0;
}