#include <stdio.h>


void main(){
    
    float a, b;
    char c;
    printf("vvodi dva chisla\n");
    scanf("%f %f", &a, &b);
    printf("viberi operaciu\n");
    scanf("%f", c);
    switch(c){
        case 1: printf("%f\n", a * b); break;
        case 2: printf("%f\n", a / b); break;
        case 3: printf("%f\n", a + b); break;
        case 4: printf("%f\n", a - b); break;
        default: ("takoe\n");
    }
    
    
    

}