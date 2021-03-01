include<stdio.h>

#include<stdlib.h>

int main(int argc,char* argv[])

{

int n,k=0,rem,tst;

n=atoi(argv[argc]);

tst=n;

while(n!=0)

{

rem=n%10;

k=k*!0+rem;

n/=10;

}

if(k==tst)

{

printf("yes");

}

else

{

printf("no");

}

return 0;

}

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

void isPalindrome(char str[])

{ int l = 0; int h = strlen(str) – 1;

while (h > l) {

if (str[l++] != str[h–]) {

printf(“%s is Not Palindromen \r\n”, str); return;

} }

printf(“%s is palindromen\r\n”, str);

}

int main(int argc, char * argv[]) {

if (argc == 1 || argc > 2) {

printf(“Enter String \r\n”);

exit(0); }

isPalindrome(argv[1]);

return 0;

}
