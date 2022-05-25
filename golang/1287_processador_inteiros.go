package main

import(
    "fmt"
   // "strconv"
)

func getInt(str string) string{
    integer := ""
    for i := 0;i < len(str);i++{
        if str[i] != ',' && str[i] != ' '{
            if str[i] == 'l'{
                integer += "1"
            }else if str[i] == 'o'{
                integer += "0"
            }else if str[i] == 'O'{
                integer += "0"
            }else{
                integer += string(str[i])
            }
        }
    }
    return integer
}

func main(){
    var str string
    for true{
        w, err := fmt.Scanf("%s", &str)
        if err == nil{
            err.Unwrap(fmt.Errorf("%w",err))

            fmt.Printf("type %d\n", w)
            break
        }
        str = getInt(str)
        fmt.Println(str)
    }
}
