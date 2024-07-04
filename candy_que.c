// #include<stdio.h>
// int main(){
//    int i,f=0;
//   //  int a[10]={3,3,3,3,3,3},n=6;
//   //  int a[10]={1,1,2,3},n=4;
//   //  int a[10]={1,2,3,4,5,6,7,8,9,10},n=10;
//   //  int a[10]={1,2},n=2;
//   // int a[10]={1,1,2,1},n=4;
//       int a[10]={6,6,3,3,6,6},n=6; 

//   for(i=0;i<n;i++){
//           if(a[0]==a[i]){
//            f++;
            
//           }
//   }
//           if(f==n){
//             printf("alice can eat 1 candy");
//           }
//           else{
//             printf("alice can eat %d candy",n/2);
//           }
        
//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int i,f=0,c=0,c1=0;
//   //  int a[10]={3,3,3,3,3,3},n=6;
//   //  int a[10]={1,1,2,3},n=4;
//   //  int a[10]={1,2,3,4,5,6,7,8,9,10},n=10;
//   //  int a[10]={1,2},n=2;
//   // int a[10]={1,1,2,1},n=4;
//       int a[10]={6,6,3,3,6,6},n=6,k; 
//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){   
//        if (a[i]==a[j]){
//            c++;
//            a[j]=0;
        
//       }
//     }
//     if(c>1){
//         c1++;
           
//     }
//     c=0;
  
//    }

//    //tiksha's logic - advance
//   int c11=0;
// for(int k=0;k<n;k++){
// if(a[k]>0)
//  {
//   c11++;
//  }
  
// }
// printf("%d",c11);

// //amit's logic from output
// //printf("%d",c1-1);

//     return 0;
// }

#include<stdio.h>
int main(){
   int i,f=0,c=0,c1=0;
  //  int a[10]={3,3,3,3,3,3},n=6;
  //  int a[10]={1,1,2,3},n=4;
  //  int a[10]={1,2,3,4,5,6,7,8,9,10},n=10;
  //  int a[10]={1,2},n=2;
  // int a[10]={1,1,2,1},n=4;
      int a[10]={6,6,3,3,6,6},n=6,k; 
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){   
       if (a[i]==a[j]){
           c++;
          //  a[j]=0;
        
      }
    }
    if(c>1){
        c1++;
         a[i]=0;
           
    }
    c=0;
  
   }

   //tiksha's logic - advance
  int c11=0;
for(int k=0;k<n;k++){
if(a[k]>0)
 {
  c11++;
 }
  
}
printf("%d",c11);

//amit's logic from output
//printf("%d",c1-1);

    return 0;
}