#include <stdio.h>
#include <limits.h>
int main() {
    int num,result;
    scanf("%d",&num);
    result = ~num;
    printf("%d",result);
    
    return 0;
}