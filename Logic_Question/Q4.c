//Find the largest of three numbers.
#include <stdio.h>

int main() {
    int n[3] ;

    for (int i = 0; i < 3; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
 int max=n[0];

    for (int i=1 ; i<3 ;i++){
        if (n[i]>max){
            max=n[i];
        }
    }
    
    printf("maximum is :%d",max);

    return 0;
}
