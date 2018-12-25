/*Program to check if a given character is a a lowercase/uppercase letter or a digit or a special symbol.*/
/*AUTHOR:Rapteon;DATE:2018-12-25*/

#include<stdio.h>

int main(){
  char enterChar;

  printf("Enter the chracter below...\n");
  scanf("%c",&enterChar);

  if(enterChar>=65&&enterChar<=90){
    printf("%c is an uppercase alphabet.\n",enterChar);
  }
  if(enterChar>=97&&enterChar<=122){
    printf("%c is a lowercase alphabet.\n",enterChar);
  }
  if(enterChar>=48&&enterChar<=57){
    printf("%c is a digit.\n",enterChar);
  }
  if((enterChar>=0&&enterChar<=47)||(enterChar>=58&&enterChar<=64)||(enterChar>=91&&enterChar<=96)||(enterChar>=123&&enterChar<=127)){
    printf("%c is a special character.\n",enterChar);
  }
}
