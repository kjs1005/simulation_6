#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *ptr;
	char string[]="Happy New Year";
	int length=strlen(string);
	ptr=(char*)malloc(sizeof(char)*(length+1));
	ptr=string;
	puts(ptr);
	system("pause");
	return 0;
}
