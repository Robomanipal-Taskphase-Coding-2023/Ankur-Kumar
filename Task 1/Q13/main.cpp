#include <iostream>
using namespace std;

int add(int a)
{   
    int sum=0;
    while (a != 0)
    {
        sum = sum + a%10;
        a = a/10;

    }
    return sum;
}

int rec_add(int r)
{
    if ( r==0)
    {
        return 0;
    }

    return (r%10 + rec_add(r/10));
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;

    cout << "\n Addition: " << add(n)<< "\n \n";
    cout << "Recusive Addition: " << rec_add(n);


}