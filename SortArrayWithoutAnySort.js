let a=[2,0,1,2,1,0],b=[];
let minval=Math.min(...a);
// console.log(minval);
for(let i=0;i<a.length;i++){
    for(let j=0;j<a.length;j++){
                 if(minval==a[j]){
                    b.push(minval);
                 }
    }
    minval=minval+1;
}
console.log(b);