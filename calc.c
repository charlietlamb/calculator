#include <stdio.h>
#include <stdbool.h>

bool opContains(char op);

int main(){
    char op;
    double first, second;
    printf("Enter an opperation: * + - /");
    scanf("%c", &op);
    if(!opContains(op)) return printf("Incorrect argument.\n");
    printf("Enter first int: ");
    if(scanf("%lf",&first)!=1)
        return printf("Incorrect argument.\n");
    printf("Enter second int: ");
    if(scanf("%lf",&second)!=1)
        return printf("Incorrect argument.\n");
    if(op == '+')
        return printf("Output: %f\n",first+second);
    if(op == '*')
        return printf("Output: %f\n",first*second);
    if(op == '/')
        return printf("Output: %f\n",first/second);
    if(op == '-')
        return printf("Output: %f\n",first-second);

}

bool opContains(char op){
    char opArray[] = {'*','+','-','/'};
    int arrayLength = sizeof(opArray)/sizeof(opArray[0]);
    for(int i=0;i<arrayLength;i++){
        if(opArray[i] == op) return true;
    }
    return false;
}
