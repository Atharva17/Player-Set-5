#include <stdio.h>
int main(void) {
	int N,n[10],i,j,count=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&n[i]);
	for(i=0;i<N;i++)
	 for(j=i+1;j<N;j++)
	   if(n[i]>n[j])
	    count++;
	if(count==0)
	printf("Yes");
	else
	printf("No");
	return 0;
}
