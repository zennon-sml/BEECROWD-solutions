package main

import (
	"fmt"
	"math"
)
func main(){
	var m, f1, f2 float64
	fmt.Scanf("%f", &m)
	fmt.Scanf("%f", &f1)
	fmt.Scanf("%f", &f2)
	f3 := m - (f1 + f2)

	fmt.Println(math.Max(math.Max(f1,f2), f3))
}
