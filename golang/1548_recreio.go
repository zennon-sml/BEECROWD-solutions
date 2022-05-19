package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		var n1, crianca int
		var meninos, meninos1 []int
		fmt.Scanf("%d", &n1)
		for j := 0; j < n1; j++ {
			fmt.Scanf("%d", &crianca)
			meninos = append(meninos, crianca)
			meninos1 = append(meninos1, crianca)
		}
		sort.Ints(meninos1)
		cout := 0
		for j := 0; j < n1; j++ {
			if meninos[j] == meninos1[n1-1-j] {
				cout++
			}
		}
		fmt.Println(cout)
	}
}
