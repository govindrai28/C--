//We have to find the nth fibonacci sereies
#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    if(n==1||n==2)
    return 1;
    int a = 1,b=1;// Initialize the first two Fibonacci numbers
    for(int i=3;i<=n;i++)//=n because we need to find the fibonacci
    {
        int next = a+b;
        a = b;
        b = next;
    }
    return b;
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n);
}