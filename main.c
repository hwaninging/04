#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sec;
    
    printf("Input the second : ");  
    scanf("%i", &sec);  
    
    printf("The time for %i second is : %i : %i : %i\n",sec , sec/3600,//hour
    (sec%3600)/60,//minute
    sec%60//second
    ); 
    
    system("PAUSE");	
    return 0;
}
