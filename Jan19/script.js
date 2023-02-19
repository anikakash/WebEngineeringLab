// function fun(){
//     const vla = parseInt("Anik", 10)
//     let sum = 5+6;
//     window.prompt(val); 
// }

function fun() {
    let sum="";
    let x = 'ANIK';
    for (let i = x.length-1; i>=0; i--) {
       sum+=x[i];
      }
      if(x==sum){
        window.prompt("YES\n")
      }
      else {
        window.prompt("NO\n")
      }
  }