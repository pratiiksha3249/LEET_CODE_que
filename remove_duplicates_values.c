#include<stdio.h>
int main(){
int p[50],f,l;
printf("enter limit...\n");
scanf("%d",&l);
printf("enter n element of array...");
for(int i=0;i<l;i++){
scanf("%d",&p[i]);
}
for(int q=0;q<l;q++){
    f=0;
    for(int t=0;t<l;t++){
        if(p[q]==p[t]){
            f++;
        }
    }

if(f>1){
    
    printf("%d",p[q]);
    break;
}
}
for(int i=0){

}

return 0;
}

