#include <stdio.h>

struct Rectangle
{
    int chieu_dai;
    int chieu_rong;
};

void tinhDienTich5HCN(){
    int height1 = 5;
    int weight1 = 7;
    printf("Dien tich va chu vi hinh chu nhat: %d %d\n", height1*weight1, (height1+weight1)*2);
    int height2 = 6;
    int weight2 = 10;
    printf("Dien tich va chu vi hinh chu nhat: %d %d\n", height2*weight2, (height2+weight2)*2);
    int height3 = 8;
    int weight3= 12;
    printf("Dien tich va chu vi hinh chu nhat: %d %d\n", height3*weight3, (height3+weight3)*2);
    int height4 = 9;
    int weight4= 15;
    printf("Dien tich va chu vi hinh chu nhat: %d %d\n", height4*weight4, (height4+weight4)*2);
    int height = 10;
    int weight = 25;
    printf("Dien tich va chu vi hinh chu nhat: %d %d\n", height*weight, (height+weight)*2);
}
void tinhDT5HCN_1(){
    int a[5] = {5,6,8,9,10};
    int b[5] = {7,10,12,15,25};
   for (int i=0; i<5; i++){
    printf("Dien tich hinh chu nhat %d %d\n",i+1, a[i] * b[i]);
   }
}

void tinhDT5HCN_2(){
    struct Rectangle rec1[5]={
        {5,7}, {6,10}, {8,12}, {9,15},{10,25}
    };
    int kq[5];
    for(int i=0;i<5;i++){
        kq[i]=rec1[i].chieu_dai*rec1[i].chieu_rong;
    }

    for(int i=0;i<5;i++){
        printf("Dien tich hinh chu nhat %d: %d\n", i+1,kq[i]);
    }

}

int main(void){
     tinhDienTich5HCN();

   
    return 0;
}