package main

import "fmt"

func remove(slice []int, s int) []int {
	return append(slice[:s], slice[s+1:]...)
}

func main() {
	var n, a, b int
	fmt.Scanf("%d", &n)
	for i1 := 0; i1 < n; i1++ {
		fmt.Scanf("%d%d", &a, &b)
		var cases []int
		for j := 0; j < a; j++ {
			cases = append(cases, j+1)
		}
		fmt.Println(cases)
		i := 0
		for len(cases) > 1 {
			if i > a-1 || i+b > a-1 {
				i = i - a
			}
			i += b - 1
			cases = remove(cases, i)
			a--
			fmt.Println(cases)
		}
	}
}
