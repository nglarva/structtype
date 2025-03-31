#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
};

int main(void){
    
    struct Student student1 = {"Nam",1};
    // student1.rollNumber = 1;
    // snprintf(student1.name, 50, "%s", "Do Hoang Long"); 
    printf("%d. %s",student1.rollNumber,student1.name);
    return 0;
}