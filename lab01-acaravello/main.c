//
//  main.c
//  lab01-acaravello
//
//  Created by Anthoni on 2/24/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int foo();
int pbr(int* reference);
int pbv(int value);


int main(int argc, const char * argv[]) {
    
    // i. Printing
    printf("This is a print statement %.2f\n", 1.01);
    printf("\n");
    
    // ii. Loops
    for (int i = 0; i<4; i++){
        if(i==0){
            printf("This is a for loop\n");
        }
    }
    printf("\n");
    int i = 0;
    while(i<3){
        // iii. Conditionals
        if(i == 1){
            printf("This is a while loop\n");
        }
        i++;
    }
    printf("\n");
    
    // iv. Creating arrays and v. Using arrays
    
    // Java style
    int arr1[3] = {1,2,3};
    printf("%d", arr1[0]);
    printf("%d", arr1[1]);
    printf("%d", arr1[2]);
    printf("\n");
    
    // Pointer Style
    
    int* arr2 = (int*) malloc(sizeof(int)*3);
    arr2[0] = 4;
    arr2[1] = 5;
    arr2[2] = 6;
    printf("%d", arr2[0]);
    printf("%d", arr2[1]);
    printf("%d", arr2[2]);
    printf("\n");
    printf("\n");
    
    // vi. command line parameters
    for (int i = 1; i<argc; i++){
        
        printf("%s ", argv[i]);
    }
    printf("\n");
    
    // vii. Using Malloc to make object on the heap
    // and
    // ix. Pointers
    
    int* int_ptr = (int*)malloc(sizeof(int));
    *int_ptr = 5;
    printf("The location of the pointer is %p\n", int_ptr);
    printf("The value of the pointer is %d\n", *int_ptr);
    
    // viii. Freeing objects from the heap
    
    free(int_ptr);
    printf("\n");
    
    // x. Getting memory references for objects on the stack
    int stack_var = 20;
    int* stack_var_ptr = &stack_var;
    printf("The memory location of the pointer is %p\n", stack_var_ptr);
    printf("The value of the pointer is %d\n", *stack_var_ptr);
    printf("\n");
    
    // xi. Using malloc to create a dynamic array
    int* dynamic_arr;
    int test_arr1[2] = {1,2};
    int test_arr2[3] = {3,4,5};
    dynamic_arr = test_arr1;
    printf("The value in the first position is %d\n", dynamic_arr[0]);
    printf("The value in the second position is %d\n", dynamic_arr[1]);
    dynamic_arr = test_arr2;
    printf("The value in the first position is %d\n", dynamic_arr[0]);
    printf("The value in the second position is %d\n", dynamic_arr[1]);
    printf("The value in the third position is %d\n", dynamic_arr[2]);
    printf("\n");
    
    // xii. Creating functions (using in code)
    printf("Foo returns %d\n", foo());
    printf("\n");
    
    // xiii. Pass by reference (using in code)
    int* temp_pnt;
    int temp_value = 10;
    temp_pnt = &temp_value;
    printf("The value after assignment is %d\n", *temp_pnt);
    printf("The value after pbr is %d\n", pbr(temp_pnt));
    
    
    // xiv. Pass by value (using in code)
    printf("The value after pbr is %d\n", pbv(temp_value));
    printf("\n");

    
    // xvi. Passing a pointer to a function
    printf("%d\n", operation(mult, 5, 3));
    printf("%d\n", operation(add, 5, 3));
    
    
    // xvii. Using structs
    person anthoni;
    person* anthoni_ptr = &anthoni;
    anthoni.name = "Anthoni";
    anthoni.age = 22;
    printf("The age of person is %d\n", anthoni.age);
    printf("\n");
    
    // xviii. Using the -> syntax
    printf("The name of person is %s\n", anthoni_ptr->name);
    
    // xix. Reading and writing from files
    FILE *current_file_ptr;
    current_file_ptr = fopen("test.txt", "w");
    fprintf(current_file_ptr, "This is us writing to the text file");
    fclose(current_file_ptr);
    
    current_file_ptr = fopen("test.txt", "r");
    char* textfile_value;
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    fscanf(current_file_ptr, "%s", textfile_value);
    printf("The text from the textfile is: %s\n", textfile_value);
    
    
    
    
    return 0;
}

// xii. Creating functions
int foo(){
    return 4;
}

// xiii. Pass by reference
int pbr(int* reference){
    return (*reference + 10);
}


// xiv. Pass by value
int pbv(int value){
    return value + 20;
}
