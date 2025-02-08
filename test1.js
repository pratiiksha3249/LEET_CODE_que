let s="ADOBECODEBANC";
let t="COBDN";
let indexArr=[],minIndexArr=[],maxIndexArr=[];

for(let i=0;i<t.length;i++){
    let c=0;
    for(let j=0;j<s.length;j++){
                  if(t[i]==s[j]){
                      if(c==2){
                        break;
                      }
                      indexArr.push(s[j],j);
                    
                      c++;
                     
                  }
    }
}

// [
//     'C', 5,   'C', 12,  'O', 2,   'O',
//     6,   'B', 3,   'B', 9,   'D', 1,  
//     'D', 7,   'N', 11
//   ]

console.log(indexArr);

for(let i=0;i<t.length;i++){
    let f=0,f1=0;
              for(let j=0;j<indexArr.length;j++){
                            
                   if(t[i]==indexArr[j]){
                           
                   f++;
                   
                   } 
                   if(j==indexArr.length-2 && f==1){
                            f1=indexArr[j+1];  
                   }


              }
              if(f==1){
                // console.log(f1);
                minIndexArr.push(f1);
              }
              
}

// console.log(maxIndexArr);


// console.log(minIndexArr);