// 1.	Write a C++ program to sort a character array alphabetically using bubble sort. (lower case only).
//  Eg: input: “worksheet” Output: “eehkorstw” 

#include <iostream>
using namespace std;

void bubble(char arr1[], int n)
{
    for( int i =0; i < n; i++)
    { 
        for ( int j =0; j < n - i -1; j++)
        {
            if (arr1[j] > arr1[j+1])
                swap(arr1[j],arr1[j+1]);
        }
    }
}

void print(char arr2[], int m)
{
    for (int i =0 ; i<m ; i++)
    {
        cout << arr2[i];
    }
}

int main()
{
    cout << "Enter a word: \n" ;
    string word;
    cin >> word;
    int l = word.size();

    char arr[l];

    // creating an array from the characters of the string.
    for(int i =0; i < l; i++)
    {
        arr[i] = word.at(i);
    }

    bubble(arr,l);
    print(arr,l);

}