/*This is a program created in response to a question.*/
/*AUTHOR:rapteon; DATE:2018-12-19;*/

#include<stdio.h>

int main(){
  int percentage_of_men, total_literacy_population, literate_men_percentage,population;

  percentage_of_men = 52;
  total_literacy_population = 48;
  literate_men_percentage = 35;
  population = 80000;

  int num_illiterate_men = 0.52*population*(1-0.35);
  int num_women = (100 - percentage_of_men)*population;
  int total_literates = total_literacy_population*population;
  int num_literate_men = 0.52*population*0.35;
  int num_literate_women = total_literates-num_literate_men;
  int num_illilterate_women = num_women-num_literate_women;

  printf("The numbers of illiterate women and men are %d and %d repectively.\n", num_illilterate_women, num_illiterate_men);

}
