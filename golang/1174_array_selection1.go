package main

import "fmt"

func main() {
	var arr [100]string
	for i := 0; i < 100; i++ {
		fmt.Scan(&arr[i])
	}
	j := 0
	for i := 0; i < 100; i++ {
		if arr[i][0] == "-" {
			arr[j] = arr[i]
			j++
		} elif 
	}
}
