// let a=[2,1,4,5,3];
let a=[1,3,3,10,2];
let m=1;
let ans=[];
for(let i=0;i<5;i++){
    for(let j=0;j<5;j++){
        if(i!=j){
         m=m*a[j];
        }
    }
    // console.log(m);
    ans.push(m);
    m=1;
}
console.log(ans);