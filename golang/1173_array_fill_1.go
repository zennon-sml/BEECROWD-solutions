package main

import "fmt"

func main() {
	var v int
	fmt.Scanf("%d", &v)
	// for i := 0; i < 10; i++ {
	// 	fmt.Printf("N[%d] = %d\n", i, v)
	// 	v *= 2
	// }
	var arr [10]int
	arr[0] = v
	for i := 1; i < 10; i++ {
		arr[i] = arr[i-1]*2
		fmt.Printf("N[%d] = %d\n", i-1, arr[i-1])
	}
	fmt.Printf("N[%d] = %d\n", 9, arr[9])
}