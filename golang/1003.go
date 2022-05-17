package main

import "fmt"

var (
	a, b, c, d int
)

func main() {
	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	fmt.Scanf("%d", &c)
	fmt.Scanf("%d", &d)
	fmt.Printf("DIFERENCA = %v\n", (a*b)-(c*d))
}
