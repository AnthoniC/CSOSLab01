//
//  functions.h
//  lab01-acaravello
//
//  Created by Anthoni on 2/25/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#ifndef functions_h
#define functions_h

#include <stdio.h>

// xvii. Structs
typedef struct person{
    char* name;
    int age;
} person;


// xvi. functions for passing pointers of functions
int add(int a, int b);

int mult(int a, int b);

int operation(int (*o)(int,int), int a, int b);

#endif /* functions_h */
