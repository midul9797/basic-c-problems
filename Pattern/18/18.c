#include<stdio.h>

int main(){
    int i,j,n, count=0;

    printf("Enter the Number of Rows = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            count++;
        }
        }
        for(i=n; i>=1; i--){
        for(j=1;j<=n-i; j++){
          printf("  ");
        }
        for(j=i;j>=1; j--){
          printf("%d ", count);
          count--;
        }
        printf("\n");
    }
    return 0;
}



