package main

import (
	"fmt"
)

func main() {
	var arr [100]float64
	for i := 0; i < 100; i++ {
		fmt.Scan(&arr[i])
		if arr[i] <= 10 {
			fmt.Printf("A[%d] = %.1f\n", i, arr[i])
		}
	}
}
