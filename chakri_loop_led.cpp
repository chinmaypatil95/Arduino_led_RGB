#include <iostream>

using namespace std;
#define A 5
#define B 3
int main()
{
    int x[A][B] = {0};
    int count = 0;
     for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            count++;
            if(i%2 == 0)
            {
                x[i][j] = count;
            }
            else
            {
                x[i][j] = x[i-1][B-j-1] + B;
            }
        }
    }
    
    // single strip loop
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            cout << "x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }
    
    //Row wise loop - Rainbow
    for (int j = 0; j < B; j++)
    {
        for (int i = 0; i < A; i++)
        {
            cout << "x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }


    return 0;
}