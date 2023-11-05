
#include <iostream>
using namespace std;


void input(int mat[3][3], int a, int b)
{   
    cout << "Enter values for matrix: \n \n";
    for( int i =0; i < a; i++)
    {
        cout << "Enter values for row" << i;
        for ( int j = 0;  j < b; j++)
            cin >> mat[i][j];
    }
    
}

void multiply(int m[3][3], int n[3][3],int result[][3])
{   
    

    int j=0;

    for (int i=0; i<3; i++)

    {  

        for(j=0; j<3; j++)

         {  
             result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            { 
                result[i][j] = result[i][j] + m[i][k]*n[k][j] ;

                
            } 
            cout << result[i][j] << "   ";
         }
        
        cout << "\n";
    }
    

}

int main()
{

    int r1;
    int c1;
    int r2;
    int c2;

     cout << "Enter r1 c1 r2 c2 \n \n";

     cin >> r1;
     cin >> c1;
     cin >> r2;
     cin >> c2;

    int m1[3][3];
    int m2[3][3];
    int r[3][3];

      if(c1 != r2)
       {
        cout << "Matrix multiplication not possible!";
       }

    input(m1,r1,c1);
    input(m2,r2,c2);

    multiply(m1,m2,r);

}



