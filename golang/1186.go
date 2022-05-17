package main

import "fmt"

func main() {
	var op string
	var matriz [12][12]float64
	count := 0
	soma := 0.0
	fmt.Scanf("%s", &op)
	for i := 0; i < 12; i++ {
		for j := 0; j < 12; j++ {
			fmt.Scanf("%f", &matriz[i][j])
			if j > count && j < count {
				soma += matriz[i][j]
			}
		}
		count++
	}
	if op == "M" {
		soma = soma / 66
	}
	fmt.Printf("%.1f\n", soma)
}
