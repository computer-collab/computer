#include <stdio.h>
#include <string.h>
int main(){
// THIS IS AN EXAMPLE  OF SUBJECTUAL AVERAGE MARKS CALCULATOR
int subjects[10];
char subject1[20],subject2[20],subject3[20];
printf("This is a bsic one so mentioning upto 3 subjects only!!");
printf("please enter your all subjects name: ");
scanf("%s%s%s",subject1,subject2,subject3);
printf("please enter the marks obtained for the subject:  :",subject1);
scanf("%d%d%d",&subject[1],&subject[2],&subject[3]);
int average=(subject[1]+subject[2]+subject[3])/3;
printf("average= %d",average);






return 0;
}
