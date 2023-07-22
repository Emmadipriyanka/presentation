
// C program to illustrate
// command line arguments
#include <stdio.h>
#include<stdlib.h>
 
int main(int argc, int* argv[])
{
	int duration,sample_rate,channels,bitwidth;
	duration = atoi(argv[4]);
    sample_rate = atoi(argv[1]);
    channels = atoi(argv[2]);
	bitwidth=atoi(argv[3]);
	printf("%d %d %d %d",duration,sample_rate,channels,bitwidth);
    return 0;
}

//gcc -o gg exa.c
//gg.exe 1 2 3