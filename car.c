#include <stdio.h>
struct Car{
    char model[100];
    int year;
    struct Owner{
        char name[100];
        int age;
    };
};

int main(void){
    struct Car car1;
    snprintf(car1.model, 100, "%s", "Porsche GT3RS");
    car1.year=2024;
    struct Owner owner1;
    snprintf(owner1.name, 100, "%s", "Bui Tien Dat");
    owner1.age=25;

    printf("Owner car information: \n");
    printf("Ten chu xe: %s\n", owner1.name);
    printf("Tuoi chu xe: %d\n", owner1.age);
    printf("Nam san xuat: %d\n", car1.year);
    printf("Loai xe: %s\n", car1.model);
    return 0;
}