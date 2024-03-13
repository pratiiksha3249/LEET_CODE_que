#include <stdio.h>

int main() {
    int num,i,j;
int array[20];
printf("enter limit.....");
scanf ("%d",&num);

for(j=1;j<=num;j++){
    for(int p=1;p<=j;p++){
    printf("*");

    }
    printf("\n");
}

return 0;
}