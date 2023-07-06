#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //Prompting the user for a starting # of llamas
  int start;
  do
  {
    start = get_int("Start size: ");
  }
   while (start < 9);

    //Prompting time for an ending # of llamas
    int end;
    do
    {
     end = get_int("Start size: ");
    }
   while (end < start);

   //How many years will it take to get to the goal?
   int year = 0;
   while (end < start);
    {
       start += start / 12;
       years++;
    }
    printf("Years: %i\n", years);
    }
