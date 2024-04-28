#include<iostream>
using namespace std;
void add(int a,int b)
{
 cout<<"the addition of "<<a<<" and "<<b<<" is "<<a+b;
}
void sub(int a,int b)
{

 cout<<"the subtraction of "<<a<<" and "<<b<<" is "<<a-b;
}
void multiply(int a,int b)
{

 cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<a*b;
}
void divide(int a,int b)
{
    if(b==0)
    {cout<<"division not possible";}
    else
    {
 cout<<"the division of "<<a<<" and "<<b<<" is "<<a/b;}
}
int main()
{  int a, n,b,c;
    do
    {cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"which operation do you want to perform:"<<endl;
    cout<<"1-addition\n2-subtraction\n3-multiplication\n4-division"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        add(a,b);
        break;
        case 2:
        sub(a,b);
        break;
        case 3:
        multiply(a,b);
        break;
        case 4:
        divide(a,b);
        break;
    }
    
    cout<<"\nDo you want to continue ,1 if yes?"<<endl;
    cin>>c;
    }while(c==1);
}