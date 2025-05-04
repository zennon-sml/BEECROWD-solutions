package main

import "fmt"

func main() {
	var arr [100]string
	for i := 0; i < 100; i++ {
		fmt.Scan(&arr[i])
	}
	fmt.Println(arr)
	
}