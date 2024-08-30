#include <stdio.h>

int main() {

    // will not work, need to declare matrix size
    // int matrix[] = {{1, 2, 3}, {4, 5, 6}};
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6} };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
