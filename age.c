#include <stdio.h>
#include <stdlib.h>

void age(int present_date, int present_month, unsigned long long int present_year, int birth_date, int birth_month, unsigned long long int birth_year) 
{
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (birth_date > present_date)
   {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }
   if (birth_month > present_month)
   {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }
   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   unsigned long long int final_year = present_year - birth_year;
   printf("Present Age Years: %llu Months: %llu Days: %llu\n", final_year, final_month, final_date);
}

int main()
{
   int present_date;
   int present_month;
   unsigned long long present_year;
   int birth_date;
   int birth_month;
   unsigned long long birth_year;
   printf("Age Calcuator\n");
   printf("----------------------\n");
   printf("Please Input Current Date and Birth Date (current_dd current_mm current_yyyy birth_dd birth_mm birth_yyyy) : ");
   scanf("%d%d%llu%d%d%llu",&present_date,&present_month,&present_year,&birth_date,&birth_month,&birth_year);
   age(present_date, present_month, present_year, birth_date, birth_month, birth_year);
   return 0;
}