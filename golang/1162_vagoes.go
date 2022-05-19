package main

import "fmt"

func newslice(n int) []int {
	var slice []int
	for i := 1; i <= n; i++ {
		slice = append(slice, i)
	}
	return slice
}

func maiorio(slice []int, maior int) int {
	for a := 0; a < len(slice); a++ {
		if maior == slice[a] {
			return a
		}
	}
	return 0
}

func main() {
	var n int
	fmt.Scanf("%d", &n)
	a := 0
	for a < n {
		a++ //while
		var n1, n2 int
		fmt.Scanf("%d", &n1)
		bolhas := newslice(n1) //make a slice of 1 until n
		var baldes []int
		for i := 0; i < n1; i++ {
			fmt.Scanf("%d", &n2)
			baldes = append(baldes, n2)
		} //append the values to the array
		i := n1 - 1
		var maior int
		maior = maiorio(baldes, bolhas[i])
		tudo := 0
		for i > 0 {
			if baldes[i] != bolhas[i] {
				temp := baldes[maior]
				baldes[maior] = baldes[maior+1]
				baldes[maior+1] = temp
				maior++
				tudo++
			} else {
				i--
				maior = maiorio(baldes, bolhas[i])
			}
		}
		fmt.Printf("Optimal train swapping takes %d swaps.\n", tudo)

	}
}
