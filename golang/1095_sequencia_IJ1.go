package main

import "fmt"

func main() {
	index1, index2 := 1, 60
	for index2 >= 0 {
		fmt.Printf("I=%d J=%d\n", index1, index2)
		index1 += 3
		index2 -= 5
	}
}
