#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year; //윤년 계산  
    
    printf("Input the year :");  
    scanf("%i", &year);  
    
    printf("Is the year %i the leap year? %i\n", year, (year%4==0 && year%100!=0)||(year%400==0));
    //400으로 나누어 떨어지면 윤년, != : 아니라는 뜻 
    
    system("PAUSE");	
    return 0;
}
