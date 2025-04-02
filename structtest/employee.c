#include <stdio.h>
#include <string.h>
struct Employee
{
    int id; //member
    char name[50];
    float salary;
};
void printEmployee(struct Employee em){
    printf("Id: %d \n Name: %s \n Salary: %.2f\n",em.id,em.name,em.salary);
}
void printEmployee1(struct Employee *em){
    printf("Id: %d \n Name: %s \n Salary: %.2f\n",em->id,em->name,em->salary);
}

void setEmployee(struct Employee e, int i, char n[50], float s){
    struct Employee * addressOfE;
    //Gán giá trị ô nhớ của biến e cho biến addressOfE
    addressOfE = &e;
    printf("Address of e %p", &e);

    addressOfE->id = i;
    snprintf(addressOfE->name,50,"%s",n);
    addressOfE->salary = s;

    printEmployee(*addressOfE);
}

struct Employee setEmployee1(int i, char n[50], float s){
    struct Employee e;
    //Gán giá trị ô nhớ của biến e cho biến addressOfE
    printf("Address of e %p\n", &e);

    e.id = i;
    snprintf(e.name,50,"%s",n);
    e.salary = s;

    printEmployee(e);
    return e;
}


int main()
{
    printf("%s", "Loading\n");
    // struct Employee employees[2] = {
    //     {1, "Nam", 4500},
    //     {2, "Nam", 5400}};
        
        
    
    // for(int i=0;i<2;i++){
    //     printf("%d\n%s\n%.2f",employees[i].id,employees[i].name,employees[i].salary);
    // }
    int num;
    struct Employee e1;
    struct Employee e2 = {6, "Long" , 200};
    struct Employee e3;
    //setEmployee(e3,4,"Hung",120.5);
    e3 = setEmployee1(5,"Hoang",200);

    printf("Address of e3: %p\n", &e3);
    printEmployee(e3);

    e1.id = 3;
    strcpy(e1.name, "Dung");
    e1.salary = 300.45;

    // printEmployee(e1);
    // printEmployee(e2);

    //printf("%d %s %.2f\n",employee1.id,employee1.name,employee1.salary);
    //printf("%d %s %.2f",employess1.id,employess1.name,employess1.salary);
    //printf("%s", employee1);
    //  if(e1.salary > e2.salary)
    //  printf("%s",e1.name);
    //  else
    //  printf("%s",e2.name);

    return 0;
}