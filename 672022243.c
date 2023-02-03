#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    system("COLOR F8");
int i, j, k, n;
{
    menu :
    printf("================\n");
    printf("===TUGAS QUIZ===\n");
    printf("================\n");
    printf("1.   Level 1    \n");
    printf("2.   Level 2    \n");
    printf("3.   Level 3    \n");
    printf("4.   Exit       \n");
    printf("================\n");
    printf("\nMasukan Pilihan :");
    scanf("%d", &n);

    switch(n){
   case 1 :
       system("cls");
        printf("Masukan Angka :");
        scanf("%d",&n);
        for(i=0; i<=n; i++){
           for(j=0; j<=i;j++){
           printf("%3d", i+j);
           }
            printf("\n");
           }
           	getch();
            system("cls");
            goto menu;
            break;

   case 2 :
        system("cls");
        printf("Masukan Angka :");
        scanf("%d",&n);
        for(i=0; i<=n; i++){
           for(j=1; j<=i;j++){
           printf("%3d", i*j);
           }
            printf("\n");
           }
           	getch();
            system("cls");
            goto menu;
            break;
    case 3 :
        system("cls");
        printf("Masukkan Angka : ");
            scanf("%d", &n);

        for (i=1; i<=n; i++){
                    printf("\n");
                    for (k=1; k<=(n-i); k++)
                    {
                    printf(" ");
                    }
                    for (j=1; j<=i;j++)
                    {
                    printf("%d",j);
                    }
                    for (j=i-1; j>=1;j--)
                    {
                    printf("%d",j);
                    }
                }
        for (i=n-1; i>=1; i--){
                    printf("\n");
                    for (k=1; k<=(n-i); k++)
                    {
                    printf(" ");
                    }
                    for (j=1; j<=i;j++)
                    {
                    printf("%d",j);
                    }
                    for (j=i-1; j>=1; j--)
                    {
                    printf("%d",j);
                    }
                }
            getch();
            system("cls");
            goto menu;
            break;
    case 4 :
        system("cls");
        printf("TERIMAKASIH");
        break;

        default:
            printf("Inputan Salah!!!\n");
            system("pause");
            system("cls");
            goto menu;
            }

        }
  }

