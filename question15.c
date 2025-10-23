#include <stdio.h>

int notes_count(int amount){
  int notes[6]={1,2,5,10,50,100};
  int total_notes=0;
  int denotion[6];
  for (int i=5;i>=0;i--){

      
        if (amount >= notes[i]){
          //printf("\n\ntotal notes %d",total_notes);
          denotion[i]= (amount)/notes[i];
          //printf("\ninitial amount = %d",amount);
          amount %=notes[i];
          //printf("\noperation by %d",notes[i]);
          //printf("\namount %d",amount);
          total_notes += denotion[i];
          printf("\nThe number of notes of %d is   %d",notes[i],denotion[i]);
          }else continue;
          
  }printf("\nThe total number of notes is %d",total_notes);
  return 0;
}


int main() {
  //notes calculator.
 // int notes[6]={1,2,5,10,50,100};
  int amount;
  int denotion;
  printf("Please enter the amount You want to withdraw:  ");
  scanf("%d",&amount);
  notes_count(amount);
  
  printf("\nHello, World! End of the program notes counter!! ");
  return 0;
}

