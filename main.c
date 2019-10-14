#include "stdlib.h"
#include "stdio.h"
#include "time.h"




int main()
{
    srand(time(0));

    for(int i = 0; i < 10; i++)
    {
        int coinArray[4] = {0};
        int change = getChange();
        printf("The change is %d\n", change);
        minChange(change, coinArray);
        printMinChange(coinArray);
    }
    return 0;
}
