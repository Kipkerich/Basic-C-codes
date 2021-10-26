#include<stdio.h>
#include<string.h>
int main()
{ char str1[12]="Good";
char str2[12]="Morning";
char str3[12];
int len;
strcpy(str3,str1);
printf("str3 copies str1 to become %s\n",str3);
printf("str1 remains to be %s\n",str1);
len=strlen(str1);
printf("the length of str1 is %s\n",len);
return 0;
}
