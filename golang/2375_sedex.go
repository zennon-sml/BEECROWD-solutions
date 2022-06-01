package main

import "fmt"

func main() {
	var bola int
	fmt.Scanf("%d", &bola)
	var n, n1, n2 int
	fmt.Scanf("%d%d%d", &n, &n1, &n2)
	if bola <= n && bola <= n1 && bola <= n2 {
		fmt.Println("S")
	} else {
		fmt.Println("N")
	}
}
