#include<iostream>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
int fact(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return n*fact(n-1);
}
int main ()
{
    int n;
    cin>>n;
    cout <<"Fibo series"<< fib(n)<<endl;
    cout<<"Factorial"<<fact(n)<<endl;
    return 0;
}
 