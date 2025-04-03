#include<stdio.h>

void quanLySAH1(){
    char name0[100]="Superman";
char power0[100]="bay";
int  health0=100;

char name1[100]="Quang";
char power1[100]="vualaptrinh";
int  health1=1000;

char name2[100]="Batman";
char power2[100]="rich";
int  health2=998;

char name3[100]="noname";
char power3[100]="can't see";
int  health3=1;

char name4[100]="virus";
char power4[100]="hack";
int  health4=1001;

int maxpw = health0;
int nameofthehero = name0;
printf(" Sieu anh hung %s co suc khoe %d va kha nang %s\n",name0, health0,power0);
printf(" Sieu anh hung %s co suc khoe %d va kha nang %s\n",name1, health1,power1);
printf(" Sieu anh hung %s co suc khoe %d va kha nang %s\n",name2, health2,power2);
printf(" Sieu anh hung %s co suc khoe %d va kha nang %s\n",name3, health3,power3);
printf(" Sieu anh hung %s co suc khoe %d va kha nang %s\n",name4, health4,power4);


printf("The strongest is: %s", nameofthehero);
}

void quanlySAH1(){
    int health[5] = {100, 1000, 998, 1, 1001};
    char name[5][10000] = {"superman", "quang", "batman", "noname", "viruts"};
    char power[5][50] = {"bay","chay","lan","di bo","nhay cao"};
    int level[5]= {2,4,3,1,5};
    char specialpower[5][1000]={"laser eyes", "giai tich","bay","invisible","livestream"};
    int max_index = 0;
    int Ability[5];


    for (int i = 0; i < 5; i++)
    {
        if (health[i] > health[max_index])
        {
            max_index = i;
        }
    }
    for (int i = 0; i<5; i++){
        Ability[i] = health[i] * level[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printSAH(name[i],power[i],health[i],level[i],specialpower[i],Ability[i]);
    }
    
  //  printf("chi so lon nhat la %d thuoc ve sieu anh hung %s\n", health[max_index], name[max_index]);

}
void printSAH(char name[50], char power[100], int health, int level, char specialpower[100],int Ability){

    printf("Name: %s\n Power: %s \n Health: %d\n Special power:%s\n Level:%d\n Ability:%d\n\n", name,power,health,specialpower,level,Ability);

}
int main()
{
    
    return 0;
}