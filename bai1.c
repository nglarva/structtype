#include <stdio.h>
#include <string.h>
struct Student
{
    int RollNumber;
    char Name[100];
    float score;
};

int main(){
    //data_type variable_name;(int number); number = 1
    // struct Student student1;
    // student1.RollNumber = 1;
    // snprintf(student1.Name, 100 , "%s" , "Ngo Xuan Nam");
    // student1.score = 7.5;
    // printf("%d.  %s\n",student1.RollNumber,student1.Name);

    // struct Student student2;
    // student2.RollNumber = 2;
    // snprintf(student2.Name, 100 , "%s", "Duong Cong Thanh");
    // student2.score = 8.2;
    // printf("%d. %s \n", student2.RollNumber, student2.Name);

    // if(student1.score>student2.score){
    //     printf("%s", student1.Name);}
    // else if(student2.score>student1.score){
    //     printf("%s", student2.Name);
       
    // }
    struct Student students[5];
    for(int i = 0;i < 5; i++){
        //STT
        students[i].RollNumber = i + 1;
        int lastIndex;
        //Name
        fgets(students[i].Name,51,stdin);
        lastIndex = strcspn(students[i].Name,"\n");
        students[i].Name[lastIndex] = '\0';
        //Score
    }
    for(int i=0;i<5;i++){
        printf("%d. %s\n", students[i].RollNumber,students[i].Name);
    }

    return 0;


}
