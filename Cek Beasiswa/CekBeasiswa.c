#include <stdio.h>

int main() {

    int nilai, kehadiran, penghasilan_orangtua, prestasi;

    printf("========================= \n");
    printf("masukan nilai anda (0-100): \n");
    scanf("%d", &nilai);
    printf("masukan kehadiran anda (0-100): \n");
    scanf("%d", &kehadiran);
    printf("masukan penghasilan orangtua anda (dalam juta): \n");
    scanf("%d", &penghasilan_orangtua);
    printf("masukan prestasi anda (0-1): \n");
    scanf("%d", &prestasi);


    if(nilai < 75 || nilai > 100 ){
        printf("Tidak memenuhi syarat nilai\n");
    }else{
        if(kehadiran < 80){
            printf("Tidak memenuhi syarat kehadiran\n");
        }else{
            if(penghasilan_orangtua <= 5000000){
                if(prestasi == 1){
                printf("============================================================\n");
                printf("Selamat, Anda memenuhi syarat untuk mendapatkan beasiswa!\n");
                }else{
                printf("Tidak memenuhi syarat prestasi\n");
                }
            }else{
                printf(" Tidak Memenuhi syarat Penghasilan Orangtua \n");
            }
        }
    }


    printf("nilai anda adalah %d \n", nilai);
    printf("kehadiran anda adalah %d \n", kehadiran);
    printf("penghasilan orangtua anda adalah %d \n", penghasilan_orangtua);
    printf("prestasi anda adalah %d \n", prestasi);

    return 0;
}