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
    friend void operator *(complex , complex);
};
    void operator * (complex a, complex b)
{
    complex temp;
    temp.r = (a.r*b.r)-(a.i*b.i);
    temp.i = (a.i*b.r)+(a.r*b.i);
    cout<<"Real and Img parts :\n"<<temp.display();
}
int main()
{
    complex c1,c2;
    c1.getdata();
    c2.getdata();
    c1*c2;
    return 0;
}    