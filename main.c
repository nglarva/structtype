//Quản lý điểm của sinh viên
#include <stdio.h>
#include <string.h>
struct HocSinh{
    char hoTen[100];
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTB;
};

int main(void){
    // char dsachHocSinh[40][100];
    // float diemToan[40];
    // float diemLy[40];
    // float diemHoa[40];
    // float diemTB[40];
    struct HocSinh hsinh1;
    int numOfChar;
    char name[20];
    printf("Size: %d\n", sizeof(hsinh1));
    //strcpy(name,"Nam");
    numOfChar = snprintf(name, 10,"%s", "Ngo Van Nam"); 
    printf("%s\n",name);

    
    hsinh1.diemToan = 7.0;
    hsinh1.diemHoa = 6.5;
    hsinh1.diemLy = 8.0;
    hsinh1.diemTB = (hsinh1.diemToan + hsinh1.diemLy + hsinh1.diemHoa)/3;
    printf("So ki tu: %d\n", numOfChar);
    printf("Diem trung cua hoc sinh %s la: %.2f",hsinh1);
    

    return 0;
}