#include <stdio.h>
#include <stdlib.h>

int main() {

    int matrix[4][4], i, j, vet_row[4] = {0,0,0,0};
    int vet_col[4] = {0,0,0,0}, sum_md = 0, sum_sd = 0;
    int test_row = 1, test_column = 1;

         //reading and saving the values ​​in the array
         printf("Type the sequence of the numbers of the magic square!!\n");
           for (i = 0; i < 4; i++) {
              for (j = 0; j < 4; j++) {
                  printf("Number in position [%d][%d] = ", i, j);
                  scanf("%d", &matrix[i][j]);
              }
           }

           printf("\n");

           //sum of array row
           for (i = 0; i < 4; i++) {
              for (j = 0; j < 4; j++) {
                 vet_row[i] += matrix[i][j];
              }
           }

           //sum of array column
           for (i = 0; i < 4; i++) {
              for (j = 0; j < 4; j++) {
                 vet_col[j] += matrix[i][j];
              }
           }

           //sum of main diagonal
            for (i = 0; i < 4; i++) {
              for (j = 0; j < 4; j++) {
                if (i == j) {
                    sum_md += matrix[i][j];
                }
              }
            }

            //sum of secondary diagonal
            for (i = 0; i < 4; i++) {
              for (j = 0; j < 4; j++) {
                if (j == (4 - 1 - i)) {
                    sum_sd += matrix[i][j];
                }
              }
            }

            /*Printing the results of the sums
            of each row, each column,
            of the main and secondary diagonal.
            Also here I print the original array*/


           //printing the sum of each row of the array
           for (i = 0; i < 4; i++) {
                printf("Sum of row [%d] = %d\n", i, vet_row[i]);
           }
              printf("\n");

           //printing the sum of each column of the array
           for (j = 0; j < 4; j++) {
                 printf("Sum of column [%d] = %d\n", j, vet_col[j]);
           }
               printf("\n");

           //printing the sum of the main diagonal
           printf("Sum of main diagonal = %d", sum_md);
               printf("\n");

           //printing the sum of the secondary diagonal
           printf("Sum of the secondary diagonal = %d", sum_sd);
                printf("\n");
                printf("\n");

                //Test if the results is equal
                for (i = 1; i < 4; i++) {
                    if (vet_row[i] != vet_row[i - 1]) {
                        test_row = 0;
                    }
                    else if (vet_col[i] != vet_col[i - 1]) {
                        test_column = 0;
                    }
                }

                if (test_row && test_column && sum_md == sum_sd && sum_md == vet_row[0]) {
                    printf("There is a Magic Square!! =D\n");
                }
                else {
                    printf("There isn't a Magic Square!! =(\n");
                }

           printf("\n");

           printf("Original array: \n");
           for (i = 0; i < 4; i++) {
              for (j = 0; j < 4; j++) {
                  printf("%d\t", matrix[i][j]);
              }
              printf("\n");
           }
    return 0;
}
