package main

import "fmt"

func main(){
	var a,b int
	for true{
		fmt.Scanf("%d%d", &a,&b)
		if a == 0 && b == 0{
			fmt.Println("00:00")
			break
		}
		a /= 30
		b /= 6
		if a < 10 && b > 9{
			fmt.Printf("0%d:%d\n", a, b)
		}else if a > 9 && b < 10{
			fmt.Printf("%d:0%d\n", a, b)
		}else if a < 10 && b < 10{
 			fmt.Printf("0%d:0%d\n", a, b)
		}else{
 			fmt.Printf("%d:%d\n", a, b)
		}
	}
}
