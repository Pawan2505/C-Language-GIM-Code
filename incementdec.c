#include<stdio.h>

int main(){
    int a =10;
    int b = 20;

    int sum = ++a + --a + b++ + b++;

    printf("%d",sum);
}