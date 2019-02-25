//
//  functions.c
//  lab01-acaravello
//
//  Created by Anthoni on 2/25/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#include "functions.h"


int add(int a, int b){
    return a+b;
}

int mult(int a, int b){
    return a*b;
}

int operation(int (*o)(int,int), int a, int b){
    int (*oper)(int, int);
    oper = o;
    return (*oper)(a,b);
}
