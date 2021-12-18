#include<iostream>
using namespace std;

class complex 
{
    int r, i ;
    public :
    void getdata ()
    {
        cin>>r>>i;
    }
    void display()
    {
        cout<<r<<"+i"<<i;
    }
    void  operator ++ ()
    {
        r++;
        i++;
    }
};
int main ()
{
    complex c1,c2;
    c1.getdata ();
    c1.display();
    //c2.getdata();
    //c2.display();
    ++c1;
    c1.display();
    return 0;
}