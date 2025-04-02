#include <stdio.h>


int main(int argc,char * argv[]){
    struct Person {
        char name[50];
        int age;
        struct Person *ptr;
    };
    struct Person p1;
    struct Person *ptr1;

    ptr1 = &p1; 
    
    printf("Address of p1: %p\n", &p1);
    printf("Address of p1.name: %p\n", &p1.name);
    printf("Address of p1.age: %p\n", &p1.age);

    printf("Pointer of p1: %p \n", &p1.ptr->age);

    printf("Address of pointer: %p\n", ptr1);
    printf("Value of pointer: %p\n", *ptr1);

    return 0;
}