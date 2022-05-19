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
	var n, n1 int
	for true {
		fmt.Scanf("%d", &n)
		if n == 0 {
			break
		} //break if its 0
		bolhas := newslice(n) //make a slice of 1 until n
		var baldes []int
		for i := 0; i < n; i++ {
			fmt.Scanf("%d", &n1)
			baldes = append(baldes, n1)
		} //append the values to the array
		i := n - 1
		maior := maiorio(baldes, bolhas[i])
		var tudo int = 0
		for i > 0 {
			copia := baldes[maior]
			//https://yourbasic.org/golang/delete-element-slice/
			copy(baldes[maior:], baldes[maior+1:]) //deixo o valor do maior igual ao proximo
			baldes[n-1] = copia
			tudo += i - maior
			i--
			maior = maiorio(baldes, bolhas[i])
		}
		if tudo%2 == 0 {
			fmt.Println("Carlos")
		} else {
			fmt.Println("Marcelo")
		}

	}
}
