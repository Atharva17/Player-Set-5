#include <stdio.h>
#include<string.h>
int main(void) {
  char A[10],B[10],i,j,count=0,M,N,res;
  scanf("%s%s",A,B);
 M=strlen(A);
 N=strlen(B);
 res=M-N;
 i=res;
 j=0;
while((A[i] && B[j])!='\0') 
 {
 	if(A[i]==B[j])
 	{
 count++;
 i++;
 j++;
 }
 }
 if(count==N)
 printf("Yes");
 else
 printf("no");
 return 0;
}
