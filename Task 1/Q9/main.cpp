#include <iostream>
using namespace std;

int main()
{
    int rows = 1;
    int colms = 3;
    string mat[1][3] = {"word","number","car"};

    AM obj;

    obj.arrange(mat,1);
    obj.print(mat);

    
}

class AM
{



 void arrange(string mat[1][3], int r)
{
    int i,j;
    
    for( i = 0; i < r; i++)
    {
        for(j =0; j< r - i -1; j++)
        {
            if (mat[i][j].length() > mat[i][j+1].length())
            {
                swap( mat[i][j], mat[i][j+1]);
            }
        }
    }
}

void print(string mat[1][3])
{
    for( int i = 0; i<1 ; i++)
    {
        for (int j =0; j<3 ; j++)
        { 
            cout << " " << mat[i][j];
        }
        cout << "\n";
    }
}

}