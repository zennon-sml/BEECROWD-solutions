package main

import "fmt"

func main() {
	var arr [20]int
	var num int
	for i := 0; i<20; i++ {
		fmt.Scanf("%d", &num)
		arr[i] = num
	}
	for i := 0; i < 10; i++ {
		temp := arr[i]
		arr[i] = arr[19-i]
		arr[19-i] = temp
	}
	for i := 0; i < 20; i++ {
		fmt.Printf("N[%d] = %d\n", i, arr[i])
	}
}