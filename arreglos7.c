#include <stdio.h>

int main() {
    
    int arr[3][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, };
    int *ptr = &arr[0][0]; 
    // ptr apunta al primer elemento 

    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", *(ptr + i*3 +j));  // direccion contiguas=> direeciones continuas 
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 9; i++){
        printf("%d\t", *(ptr + i));
        ((i)%3==2)? printf("\n"): printf(" "); 
    }
    return 0;
}