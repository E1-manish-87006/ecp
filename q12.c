
#include<stdio.h>
#include<float.h>
void main(){
	printf("Data Type\tSize\tFormat Specifier\tRange\n");
	printf("--------------------------------------------\n");

	printf("float\t %d\t %%f \t  %d to %d  \n",sizeof(float), FLT_MIN , FLT_MAX );
	printf("double \t  %d\t  %%g\t   %d to %d \n",sizeof(double),DBL_MIN,DBL_MAX);
	}
