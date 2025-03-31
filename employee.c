#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee employees[2] = {
        {1, "Nam", 4500},
        {2, "Nam", 5400}};

    for(int i=0;i<2;i++){
        printf("%d\n%s\n%.2f",employees[i].id,employees[i].name,employees[i].salary);
    }

    return 0;
}