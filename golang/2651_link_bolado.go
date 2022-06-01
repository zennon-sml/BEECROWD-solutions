package main

import(
	"fmt"
)

func main(){
	var str string
	fmt.Scanf("%s", &str)
	tam := len(str)
	sim := false
	for i := 0;i < tam-6;i++{
		if str[i] == 90 || str[i] == 122 && str[i+1] == 69 || str[i+1] == 101 && str[i+2] == 76 || str[i+2] == 108 && str[i+3] == 68 || str[i+3] == 100 && str[i+4] == 65 || str[i+4] == 97{
			sim = true
			break
		}
	}
	if sim{
		fmt.Println("Link Bolado")
	}else{
		fmt.Println("Link Tranquilo")
	}

}