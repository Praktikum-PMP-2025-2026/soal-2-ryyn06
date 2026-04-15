/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1
 *   Hari dan Tanggal    : Rabu, 15 April 2026
 *   Nama (NIM)          : Achmad Rayyan Hawari
 *   Nama File           : soal2.c
 *   Deskripsi           : menghitung langkah sesuai ketentuan transformasi tertentu
 * 
 */

#include <stdio.h>

int Totallangkah(int N) {
    int langkah = 0 ;
    while (N !=1)
    {
        
        if (N%2 == 0)
        {
            N = N/2;
            langkah ++;
        }
        else
        {
            N = 3*N + 1;
            langkah++;
        }
    }
    
    return langkah;
}

int main(){
    int N, angka[100];

    scanf("%d", &N );
    int i = 0;

    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &angka[i]);
    }

    printf("\n");
    
    
    for (size_t i = 0; i < N; i++)
    {
        printf("Langkah %d\n", Totallangkah(angka[i]));
        if (i != N-1)
        {
            printf("\n");
            
        }
        
    }
    
    return 0 ;
}

