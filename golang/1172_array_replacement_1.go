package main

import "fmt"

func main() {
	var arr [10]int
	var x int
	for i := 0;i < 10; i++ {
		fmt.Scanf("%d", &x)
		if x < 1 {
			arr[i] = 1
		} else {
			arr[i] = x
		}
	}
	for i := 0;i < 10; i++ {
		fmt.Printf("X[%d] = %d\n", i, arr[i])
	}
}