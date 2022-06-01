package main

import "fmt"

func main() {
	var x, y int
	for true {
		fmt.Scanf("%d%d", &x, &y)
		if x == 0 && y == 0 {
			break
		}
		fmt.Println(x + y)
	}
}
