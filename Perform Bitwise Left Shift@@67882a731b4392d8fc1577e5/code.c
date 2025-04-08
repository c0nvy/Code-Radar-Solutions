#include <stdio.h>
int main() {
    int num,shift,result;
    scanf("%d %d",&num,&shift);
    result = num<<shift;
    printf("%d",result);
    return 0;
}