#include <iostream>
using namespace std;

string dec_to_bin(int n)
{
    string bin = "";

    while ( n != 0)
    {   char ch;

        int r = n % 2;
        ch = r+48;

        bin = bin + ch;
        n = n / 2;    
        
    }

    int i = 0;
        int j = bin.size()-1;
        
        while (i <= j)
        {
            swap(bin[i], bin[j]);
            i++;
            j--;
        }

        return bin;

    
}

string dec_to_hexa(int n)
{
    string hex = "";

    while( n != 0)
    {
        int r =0;

        char ch;

        r = n % 16;

        if( r < 10)
        {
            ch = r+48;
        }

        else if(r == 10)
        {
            ch = 'A';
        }

        else if(r == 11)
        {
            ch = 'B';
        }

        else if(r == 12)
        {
            ch = 'C';
        }

        else if(r == 13)
        {
            ch = 'D';
        }

        else if(r == 14)
        {
            ch ='E';
        }

        else if(r == 15)
        {
            ch = 'F';
        }

        hex = hex + ch;
        n = n / 16;
    }

        int i = 0;
        int j = hex.size()-1;
        
        while (i <= j)
        {
            swap(hex[i], hex[j]);
            i++;
            j--;
        }

        return hex;

    
}

string dec_to_oct(int n)
{
    string oct = "";

    while(n != 0)
    {
        int r = 0;

        char ch;

        r = n % 8;
        ch = r+48;

        oct = oct + ch;
        n = n / 8;
    }

    int i =0;
    int j =oct.size()-1;

    while(i <=j)
    {
        swap(oct[i], oct[j]);
        i++;
        j--;

    }
    return oct;
}

int main()
{
    cout << "Enter a number: \n ";
    int n;
    cin >> n;

   dec_to_bin(n);

    string hex = dec_to_hexa(n);

    string oct = dec_to_oct(n);

    string bin = dec_to_bin(n);

    cout << "The number in hexadecimal number system is:    " << hex << "\n\n";
    cout << "The number in octal number system is:  " << oct << "\n\n";
    cout << "The number in binary number system is:     " << bin << "\n\n";


}





