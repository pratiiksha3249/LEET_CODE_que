#include<stdio.h>
int main(){

int i,j,a[30],b[30],n;
printf("enter limit...");
scanf("%d",&n);

printf("\n enter 1st array...");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("\n enter 2nd array...");
for(j=0;j<n;j++){
scanf("%d",&b[j]);
}

for(int p=0;p<n;p++){
    for(int q=0;q<n;q++){
        if(a[p]==b[q]){
            a[p]=0;

        }
    }
}
              for(int u=0;u<n;u++){
                printf("%d\t",a[u]);

              }

    return 0;
}