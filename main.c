#include <stdio.h>
#include <stdlib.h>

int hammingWeight(unsigned int n) {
    int count = 0;;
    
    while (n)
    {
        if (n&1 == 1)
            count ++;
        
        n >>= 1;
    }
    
    return count;
}

int main()
{
    printf("%d => %d 1 bits\n", 11, hammingWeight(11));
    printf("%d => %d 1 bits\n", 3, hammingWeight(3));
    printf("%d => %d 1 bits\n", 0xFFFFFFFF, hammingWeight(0xFFFFFFFF));
    printf("%d => %d 1 bits\n", 0xFFFFFFFD, hammingWeight(0xFFFFFFFD));
    return 0;
}