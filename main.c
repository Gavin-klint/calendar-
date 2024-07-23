#include <stdio.h>
#include <math.h>
int main() {
  int days;
  int date;
  int weeks;
  int week;
  int months;
  int year;
  int month;
  int a;
  printf("enter the no of days\n");
  scanf("%d", &a);
  weeks = a / 7;
  week = weeks % 7;
  days = a % 7;
  date = a %30;
  printf("date = %d\n", date);
  months = a / 30 || a / 31;
  month = months % 12;
  switch (month){
    case 1: printf("january\n");
      break; 
    case 2: printf("february\n");
     break;
    case 3: printf("march\n"); 
    break;
    case 4: printf("april\n");
    break;
    case 5: printf("may\n");
    break;
    case 6: printf("june\n");
    break;
    case 7: printf("july\n"); 
    break;
    case 8: printf("august\n");
    break;
    case 9: printf("september\n");
    break;
    case 10: printf("october\n");
    break;
    case 11: printf("november\n");
    break;
    case 12: printf("december\n");
    break;
    default: printf("december\n");
  }
  year = a/365;
 

  if (year%4==0){
    printf("leap year\n");
  }
  
  if (year%5==0){
    month=month+1;
  }
  
  switch (days){
    case 1: printf("monday\n");
      break;
    case 2: printf("tuesday\n");
     break;
    case 3: printf("wednesday\n");
      break;
    case 4: printf("thusday\n");
    break;
    case 5: printf("friday\n");
    break;
    case 6: printf("saturday\n");
    break;
    case 0: printf("sunday\n");
    break;
    default: printf("invalid\n");
  }
  
   printf("year = %d\nmonths = %d\nweek = %d \n", year, months, week);



  return 0;
}