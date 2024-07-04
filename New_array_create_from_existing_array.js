// let a=[1,2,0,8,5,6,0];

// for(let i=0;i<a.length;i++){
// if(a[i]!=0){
// a.push(a[i]);
// }
// }
// console.log(a);

//for(let k=0;k<a.length;k++){

// console.log(a);   
//}

let a=[1,2,0,8,0,6,0,6,5,0,8],newnum=[],c=0;

a.forEach((num)=>{
    if(num!=0){
        newnum.push(num);
    }
    else if(num==0){
            c++;
    }
})

for(let k=0;k<c.length;k++)
{
newnum.push(0);

}
console.log(newnum);