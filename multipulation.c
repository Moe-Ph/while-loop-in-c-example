#include <stdio.h>

int main(){

    int number;
    
    printf("enter a number..");
    
    scanf("%d", &number);

    int count =1;

    while (count <=10)
    {
        int result = count * number;
        printf("%d*%d = %d\n",number,count,result);
        count = count + 1;
    
    }
    
    


    return 0;


}