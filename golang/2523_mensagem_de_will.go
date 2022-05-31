package main

import "fmt"

func main() {
	for true {
		var str string
		_, err := fmt.Scanf("%s", &str)
		if err != nil {
			break
		}
		var n, z int
		var slice []int
		fmt.Scanf("%d", &n)
		for i := 0; i < n; i++ {
			fmt.Scanf("%d", &z)
			slice = append(slice, z-1)
		}
		for i := 0; i < n; i++ {
			fmt.Printf("%s", string(str[slice[i]]))
		}
		fmt.Println()
	}
}
