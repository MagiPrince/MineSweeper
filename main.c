#include <stdlib.h>
#include <stdio.h>
#define SIZEARRAYX 10
#define SIZEARRAYY 10


//Print the mine Ground and transform the numbers in ascii caracters
void arrayPrint(int mineGround[][SIZEARRAYY])
{
    for (int i = 0; i < SIZEARRAYX; ++i)
    {
        for (int j = 0; j < SIZEARRAYY; ++j)
        {
            if(mineGround[i][j] == 0)
            {
                printf(".");
            }
        }
        printf("\n");
    }
}


int main(int argc, char *argv[])
{
    int mineGround[SIZEARRAYX][SIZEARRAYY] = {{0}};

    arrayPrint(mineGround);

    return 0;
}
