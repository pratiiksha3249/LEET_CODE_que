let s="ADOBECODEBANC";
let t="COBDN";
let indexArr=[],minIndexArr=[],maxIndexArr=[],maxNewArr=[],minNewArr=[];

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



// console.log(indexArr);

for(let i=0;i<t.length;i++){
    let f=0;
              for(let j=0;j<indexArr.length;j++){
                            
                   if(t[i]==indexArr[j]){
                    f++;
                    if(f==1){

                        maxIndexArr.push(indexArr[j+1]);
                    }
                    else{
                        minIndexArr.push(indexArr[j+1]);
                    }
                   }    

              }
}


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



let maxmin_ind=Math.min(...maxIndexArr);

let maxmax_ind=Math.max(...maxIndexArr);


let minmin_ind=Math.min(...minIndexArr);

let minmax_ind=Math.max(...minIndexArr);




for(let i=maxmin_ind;i<maxmax_ind;i++){
         maxNewArr.push(s[i]);      
}

for(let i=minmin_ind;i<minmax_ind;i++){
    minNewArr.push(s[i]);      
}

 let maxString=maxNewArr.toString();
 let minString=minNewArr.toString();

 let minString1=minString.replaceAll(",", "")
 let maxString1=maxString.replaceAll(",", "")




 if(maxString1<minString1){
    console.log(minString1);
 }
 else{
    console.log(maxString1);
 }





