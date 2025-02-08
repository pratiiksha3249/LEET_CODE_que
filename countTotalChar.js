let a="aaabcccc";
let c=0;
let s=new Set(a);
let b=[...s];
for(let i=0;i<b.length;i++){
          for(let j=0;j<a.length;j++){
               if(b[i]==a[j]){
                c++;
               }
          }
          console.log(b[i]+""+c);
          c=0;
}