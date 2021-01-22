//Pointer
//https://www.hackerrank.com/challenges/c-tutorial-pointer/submissions/code/192848426
#include <stdio.h>

void update(int *a,int *b) {
    int temp_a = *a;
    *a = *a+*b;
    *b = temp_a-*b;   
    if(*b<0){
        (*b)*=-1;
    } 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}