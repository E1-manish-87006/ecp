#include<stdio.h>
#include<limits.h>
void main(){
	printf("Data Type\tSize\tFormat Specifier\tRange\n");
	printf("--------------------------------------------\n");

	printf("char\t %d\t %%c \t  %d to %d  \n",sizeof(char), SCHAR_MIN , SCHAR_MAX );
	printf("unsigned char \t  %d\t  %%c\t   %d to %d \n",sizeof(unsigned char),0,UCHAR_MAX);
	printf("short int \t %d \t %%hd \t %d to %d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("unsigned short int \t %d \t %%hu \t %d to %d\n",sizeof(unsigned short int),0,USHRT_MAX);
	printf("int \t %d \t %%d \t %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("unsigned int \t %d \t %%u \t %d to %d\n",sizeof(unsigned int),0,UINT_MAX);
	printf("long int \t %d \t %%ld \t %d to %d\n",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("unsigned long int \t %d \t %%lu \t %d to %d\n",sizeof(unsigned long int),0,ULONG_MAX);
}
