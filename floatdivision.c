#include <stdio.h>
float division (int a, int b){
float r=(float)a/b;
	return r;
}
int main (){
	int num,den;
	printf ("enter two proper values:   ");
	scanf ("%d%d",&num,&den);
	if(num>den){float result = division(num,den);printf("%f",result);}else{printf("Input error");}
	return 0;
}