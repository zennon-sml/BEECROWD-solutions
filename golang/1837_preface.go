package main

import (
	"math"
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	q := int(math.Floor(float64(a) / float64(b)))
	r := a - b*q
	fmt.Printf("%d %d\n", q, r)
}