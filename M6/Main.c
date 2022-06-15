#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
	int bit = c1 << 24 | c2 << 16 | c3 << 8 | c4;
	return bit;
}

int checkEvenParity(short input)
{
    // Initialise count variables
    int count0 = 0, count1 = 0;

    // Iterate through all the bits
    while (input > 0 )
    {

        // If current bit is 1
        if (input & 1)
        {
            count1++;
        }

        // If current bit is 0
        else
        {
            count0++;
        } 
        input = input >> 1;
    }
    if (count1 % 2 == 0)
        return 1;
    else 
        return 0;
}

void main()
{
	//char c1, c2, c3, c4;
	//c1 = 'a';
	//c2 = 'b';
	//c3 = 'c';
	//c4 = 'd';
    int result = 0;
	//result = pack4Chars2Int(c1, c2, c3, c4);
 
    result = checkEvenParity(7);
    printf("%d", result);
}