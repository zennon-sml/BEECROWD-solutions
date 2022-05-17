package main

import "fmt"

func main() {
	var a int
	fmt.Scanf("%d", &a)
	fmt.Printf("Feliz nat")
	for i := 0; i < a; i++ {
		fmt.Print("a")
	}
	fmt.Printf("l!\n")
}
