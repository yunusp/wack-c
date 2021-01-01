#include <stdio.h>

void print_matrix(int r, int c, int m[][c]) {
    for (int i = 0; i < r; i++) {
        printf("\n");
        for (int k = 0; k < c; k++) {
            printf("%d\t", m[i][k]);
        }
    }
}
int main(){
    int m1[10][10];
    int m2[10][10];
    int m1r , m1c, m2r,m2c, tot;
    printf("enter rows and colums for m1\n");
    scanf("%d,%d",&m1r,&m1c);

    printf("enter values for m1\n");
     for (int i = 0; i < m1r; i++) {
        for (int k = 0; k < m1c; k++) {
            scanf("%d", &(m1[i][k]));
        }
    }
    printf("\n\nvia print_matrix\n");
    print_matrix(m1r,m1c,m1);
    printf("\n");

    printf("manual printing\n");
    for (int i = 0; i < m1r; i++) {
        printf("\n");
        for (int k = 0; k < m1c; k++) {
            printf("%d\t", (m1[i][k]));
        }
    }
}























//     retry:
//     printf("enter rows and colums for m2\n");
//     scanf("%d,%d",&m2r,&m2c);
//     if(m1c!=m2r){
//         printf("invalid values. try again\n");
//         goto retry;
//     }
//     printf("enter values for m2\n");
//      for (int i = 0; i < m2r; i++) {
//         for (int k = 0; k < m2c; k++) {
//             scanf("%d", &(m2[i][k]));
//         }
//     }


// }