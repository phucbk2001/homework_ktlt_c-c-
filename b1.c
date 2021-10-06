#include<stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	printf("\nKich co_min_max cua kieu du lieu char la: \t\t%ld %d %d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("\nKich co_min_max cua kieu du lieu unsigned char la: \t%ld %d %d\n",sizeof(unsigned char),0,UCHAR_MAX);
    printf("\nKich co_min_max cua kieu du lieu int la: \t\t%ld %d %d\n",sizeof(int),INT_MIN,INT_MAX);
    printf("\nKich co_min_max cua kieu du lieu unsigned int la: \t%ld %d %u\n",sizeof(unsigned int),0,UINT_MAX);
    printf("\nKich co_min_max cua kieu du lieu unsigned long la: \t%ld %d %lu\n",sizeof(unsigned long),0,ULONG_MAX);
    printf("\nKich co_min_max cua kieu du lieu float la: \t\t%ld %e %e\n",sizeof(float),FLT_MIN,FLT_MAX);
}