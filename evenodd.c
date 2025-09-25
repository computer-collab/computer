#include <stdio.h>
int main(){
	int n;
	printf("Enter any natural number:    ");
	scanf("%d",&n);
	if(n>0&&n%2==0)printf("even");
	else if (n>0&&n%2==1)printf("odd");
	else printf("error");
	return 0;
}