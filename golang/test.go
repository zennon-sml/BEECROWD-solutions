package main

import (
	"fmt"
)

func main() {
	baldes := []int{9, 10, 7, 3, 6, 11, 5, 1, 4, 2, 8}
	maior := 0
	test := baldes[maior]
	copy(baldes[maior:], baldes[maior+1:]) //deixo o valor do maior igual ao proximo
	baldes[len(baldes)-1] = test
	fmt.Println(baldes)
}
