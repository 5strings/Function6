//
//  main.c
//  Function6
//
//  Created by Eun Jae Lee on 22/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Argument & Return value

#include <stdio.h>

int add(int,int);

int main() {

    int a,b,sum;
    printf("Enter two numbers for addition: \n");
    scanf("%d%d", &a,&b);
    
    sum = add(a,b);
    
    printf("%d + %d = %d \n",a,b,sum);
    getchar();
}

int add(int x, int y){
    int sum;
    sum = x+y;
    return sum;
    
}
