#include <iostream>
using namespace std;


// The recusion function basically give the nth fibonachi number.
// By sending 'i' in function we are obtaining nth fibonachi number and printing it.

int fib(int n)
{
    if ( n==0)
    {
        return 0;
    }

    if (n==1 || n==2)
    {
        return 1;
    }

    else
    {
        return (fib(n-1)+fib(n-2));

    }
}

int main()
{
    int n = 40;
    cout << "Finoacci Series : \n \n";

    for ( int i = 0; i < n; i++)
    {
        cout << fib(i) << " ";
    }

}