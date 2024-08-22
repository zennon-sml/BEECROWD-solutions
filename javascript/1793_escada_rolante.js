let input = require('fs').readFileSync('stdin', 'utf8');
let lines = input.split('\n');

for (let index = 0; index < lines.length; index++) {
    if(lines[index] == 0){
        break
    }
    if(index % 2 != 0){
        let asdf = lines[index].split(' ').map((value) => parseInt(value))
        let min = 0
        if(asdf.length === 1){
            console.log(10)
        }else{
            for(let i = 0; i < asdf.length - 1; i++){
                if(asdf[+1] - asdf[i] < 10 && asdf[+1] - asdf[i] > 0){
                    min += asdf[+1] - asdf[i]
                }
                min += 10
            }
            console.log(min)
        }
    }
}