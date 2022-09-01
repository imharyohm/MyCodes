#include<stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter max coeff of 1st and 2nd polynomial : ");
    scanf("%d%d", &m, &n);
    int a[m], b[n], p[m+n-1];
    
    printf("1st POLYNOMIAL : \n");
    for(i = 0; i < m; i++){
       printf("Enter the coeff of x^%d : ", m-1-i);
       scanf("%d", &a[i]);
    }
    printf("\n2nd POLYNOMIAL : \n");
    for(i = 0; i < n; i++){
       printf("Enter the coeff of x^%d : ", n-1-i);
       scanf("%d", &b[i]);
    }
    
    for(i = 0; i < (m+n-1); i++){
       p[i] = 0;
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            p[i+j] = p[i+j] + (a[i]*b[j]);
        }
    }

    printf("\nRESULTANT POLYNOMIAL : \n");
   for(i = 0; i < m+n-1; i++){
       printf("+");
       printf("%d(x^%d)", p[i], m+n-2-i);
    }
    return 0;
}
