#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i;
    int j;
    for(i=0; i<n-1;i++)
    {
        for (j=0; j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

    cout << "Bubblesort function called. \n";
}

void selectionSort(int arr[], int n)
{
    int i;
    int j;
    int min_index;

    for( i=0; i<n; i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j] < arr[min_index])
                {
                    min_index=j;
                }
            
               swap(arr[min_index],arr[i]);
                
        }
    }
    cout << "Selection sort called.\n";
}

void printarr(int arr[],int n)
{
    int i;
    cout << "Sorted array:\n";
    for(i=0; i<n; i++)
    {
        cout << arr[i];
    }
}

int main()
{   string choice;
    cout << "s: Selection Sort\n \n";
    cout << "b: Bubble Sort \n \n";
    cin >> choice;
    int array[] = {7,3,5,2,1};
    int size = sizeof(array[0]);

    
    if(choice == "s")
    {
        selectionSort(array,size);
    }
    
    if(choice == "b")
    {
        bubbleSort(array,size);
    }

    printarr(array,size);

    


}