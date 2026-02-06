#include <stdio.h>
int main() {
    
    int num;
    int result1;
    float result2;
    printf("enter a num: ");
    scanf("%d" , &num);
    result1 = num * 2;
    result2 = num / 2;
    printf("the double is: %d\n" , result1);
    printf("the half is: %d\n" , result2);
    
return 0;
}
