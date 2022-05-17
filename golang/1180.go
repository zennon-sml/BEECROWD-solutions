package main

import (
	"fmt"
)

func main() {
	var n, x int
	var vetor []int
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &x)
		vetor = append(vetor, x)
	}
	max := vetor[0]
	j := 0
	for i := 0; i < n; i++ {
		if max > vetor[i] {
			max = vetor[i]
			j = i
		}
	}
	fmt.Printf("Menor valor: %d\nPosicao: %d\n", max, j)
}
