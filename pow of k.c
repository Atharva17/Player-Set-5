#include <stdio.h>
#include<math.h>
int main(void)
{
	int N,K,i,count=0;
	scanf("%d%d",&N,&K);
	for(i=0;i<=N;i++)
	 if(pow(K,i)==N)
	  count++;
	if(count>0)
	printf("yes");
	else
	printf("No");
	return 0;
}
