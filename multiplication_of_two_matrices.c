#include <stdio.h>
int main() {
    int matrix1[2][2],matrix2[2][2],matrix3[2][2] = {0};
    printf("Enter the elements of the first matrix\n");
    for(int i=0;i<2;i++) {
        for(int j=0; j<2; j++) {
            printf("Element for the position [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<2;i++) {
        for(int j=0; j<2; j++) {
            printf("Element for the position [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<2; k++){
                matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }

    }

    printf("The product of the two matrix is :\n");
    for(int i=0; i<2;i++) {
        for(int j=0; j<2;j++) {
        printf("%4d",matrix3[i][j]) ;
        }
        printf("\n");

    }

return 0;
}
