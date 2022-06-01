package main

import "fmt"

func main() {
	var x, y int
	for true {
		_, err := fmt.Scanf("%d%d", &x, &y)
		if err != nil {
			break
		}
		if y >= 97 {
			fmt.Println("cheia")
		} else if y < 97 && x > y && y > 2 || x == y {
			fmt.Println("minguante")
		} else if y < 97 && y > 2 {
			fmt.Println("crescente")
		} else {
			fmt.Println("nova")
		}
	}
}
