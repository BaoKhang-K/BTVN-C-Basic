#include <stdio.h>

int main()
 {
    float toan, ly, hoa,diem_tb;


    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);


    diem_tb = (toan + ly + hoa) / 3;
    printf("diem trung binh %f\n", diem_tb );

    if(diem_tb >= 8.0)
        printf("gioi\n");
    {
    else 
        if (diem_tb >= 6.5 && diem_tb < 8.0)
        printf("Kha\n");
    else 
        if (diem_tb >= 5.0 && diem_tb < 6.5)
        printf("Trung binh\n");
    else
        printf("Yeu\n");
    }



    return 0;
}
