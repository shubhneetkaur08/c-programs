#include<stdio.h>
#include<string.h>
int main() {
	char str1[50]="hello";
	char str2[50]="world";
	char str3[50];
	printf("length of str1=%d\n", strlen(str1));
	strcpy(str3,str1);
	printf("copied str1 into str3:%s\n\n",str3);
	int cmp=strcmp(str1,str2);
	if(cmp==0)
	printf("str1 and str2 are equal \n\n");
	else if (cmp<0)
	printf("str1 is smaller than str2\n\n");
	else
	printf("str1 is greater than str2\n\n");
	printf("lowercase str1:%s\n",srlwr(str1));
	printf("uppercase str2: %s\n\n", strupr(str2));
	strcat(str1,str2);
	printf("concatenated string (str1+str2): %s\n\n",str1);
	printf("reverse of the str3: %s\n", strrev(str3));
	return 0;
}
