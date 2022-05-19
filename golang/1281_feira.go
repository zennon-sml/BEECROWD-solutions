package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		//first input
		var prod int
		var dindin float64
		var prods string
		var feira []float64
		var bixo []string
		fmt.Scanf("%d", &prod)
		for j := 0; j < prod; j++ {
			fmt.Scanf("%s", &prods)
			fmt.Scanf("%f", &dindin)
			bixo = append(bixo, prods)
			feira = append(feira, dindin)
		} //second input
		var feira1 int
		var trocados float64
		var compra string
		var feirames []float64
		var compras []string
		fmt.Scanf("%d", &feira1)
		for j := 0; j < feira1; j++ {
			fmt.Scanf("%s", &compra)
			fmt.Scanf("%f", &trocados)
			compras = append(compras, compra)
			feirames = append(feirames, trocados)
		}
		//make output
		var valor float64 = 0
		for j := 0; j < feira1; j++ {
			for j1 := 0; j1 < prod; j1++ {
				if compras[j] == bixo[j1] {
					valor += feirames[j] * feira[j1]
					break
				}
			}
		} //output
		fmt.Printf("R$ %.2f\n", valor)
	}
}
