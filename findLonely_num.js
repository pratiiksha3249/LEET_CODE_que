
let a=[10, 6, 9, 8, 3, 7, 6],b=[];
console.log("lonly number :\n");
for (let i = 1; i < 6; i++)
{
    if (a[i] == a[i - 1] + 1 || a[i] == a[i - 1] - 1 || a[i] == a[i + 1] + 1 || a[i] == a[i + 1] - 1)
    {
        continue;
    }
    else
    {
       b.push(a[i]);    
    }
}

console.log(b);