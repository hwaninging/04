#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int time; //변수 선언  
    
    printf("Input the second :");  
    scanf("%i", &time);  
    
    printf("the time is : %i : %i\n", time/60, time%60); //분 : 초  
    
    system("PAUSE");	
    return 0;
}
