package main

import "fmt"

func main() {
	var linha int
	var sm string
	soma := 0.0
	var matriz [12][12]float64
	fmt.Scanf("%d", &linha)
	fmt.Scanf("%s", &sm)
	for i := 0; i < 12; i++ {
		for j := 0; j < 12; j++ {
			fmt.Scanf("%f", &matriz[i][j])
			if linha == j {
				soma += matriz[i][j]
			}
		}
	}
	if sm == "M" {
		soma = soma / 12
	}
	fmt.Printf("%.1f\n", soma)
}
