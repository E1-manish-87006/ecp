/***3. Write a function to read a file line by line and copy the contents to another file.*****/

#include<stdio.h>

int main(){
	FILE *fp;
	fp=fopen("file1.txt","w");

	char *ch="h";
	while((ch=fgetc(fp))!=EOF){
		fputc(ch,fp);
	}


	fclose(fp);
	return 0;
}
