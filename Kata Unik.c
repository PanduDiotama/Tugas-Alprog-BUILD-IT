#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[101], B[101];
    
    scanf("%s", A);
    scanf("%s", B);
    
      if (strcmp(A, B) == 0)
            printf("IDENTIK\n");
        else
            if (strlen(A) == strlen(B))
                printf("MIRIP\n");
            else
                printf("BERBEDA\n");
                
    
    return 0;
}