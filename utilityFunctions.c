#include "utilityFunctions.h"
#include "time.h"

void minChange(int change, int *coinArray)
{
    int currentChange = 0;
    int valueArray[] = {25,10,5,1};

    while(change != 0)
    {
        if(valueArray[currentChange] <= change)
        {
            change -= (valueArray[currentChange]);
            coinArray[currentChange] += 1;
        }

        else
            currentChange++;
    }
}

void printMinChange(int *coinArray)
{
    printf("The change is %d quarters, %d dimes, %d nickels, %d pennies\n", coinArray[0], coinArray[1], coinArray[2], coinArray[3]);
}

int getChange()
{
    return (rand() % 99 + 1);
}
