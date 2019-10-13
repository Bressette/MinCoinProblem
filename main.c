#include "stdlib.h"
#include "stdio.h"
#include "time.h"




int main()
{
    srand(time(0));
    int coinArray[4];
    int change = getChange();
    printf("The change is %d", change);
    return 0;
}
