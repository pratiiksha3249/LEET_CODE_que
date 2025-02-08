let a = [1,2,3,4,1,2,4,1];
let b=a,c=0;
const minVal = console.log(Math.min(...b)); 
let unique = a.filter((item, i, ar) => ar.indexOf(item) === i);
console.log(unique);
let num=unique[0];
let sorta=[];
// console.log(unique.length);

for(let i=0;i<a.length;i++){
        if(num==a[i]){
           c++;
        }
        for(let j=0;j<c;j++){
            sorta.push(num);
        }
        num=num+1;
        c=0;
}
console.log(sorta);