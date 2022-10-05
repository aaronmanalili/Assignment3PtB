#include <stdio.h>

// CSIT 313 Task 3 Part B  C Program by Aaron Manalili 3/2/2022
int main()
{

  int number;
  printf("A sentence will be printed out when the program is running. \n");
  printf("Enter the number of times the sentence will be printed out. \n");
  scanf("%d", &number);

  for(int i = 0; i < number; i++)
  {
    char string[] = "I want Summer to come! \n";
    printf("%s", string);
  }

  if(number == 1)
  {
    printf("The sentence in the for loop was printed out %d time", number);
  }
  else
  {
  printf("The sentence in the for loop was printed out %d times \n", number);
  }

}
