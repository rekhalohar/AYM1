#include<stdio.h>
#include <stdbool.h>

bool isprime(int num){
        for (int i = 2; i < num / 2; i++) {
            if(num%i==0){
                return false;
            }

}
return true;
}
int main(){
int a,b;
printf("enter the number:");
scanf("%d %d" ,&a, &b);
    for (int i = a; i <= b; i++) {
    if(isprime(i)){
        printf("%d\n" ,i);
    }
}
}