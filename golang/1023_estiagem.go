package main

import (
	"fmt"
)

type Consumo struct {
	tpess float64
	tagua float64
}

func main() {
	var n int
	for true {
		fmt.Scanf("%d", &n)
		if n == 0 {
			break
		}
		var pess, agua float64
		var total []Consumo
		var totalKeys []string
		tPess := 0.0
		tAgua := 0.0
		for i := 0; i < n; i++ {
			fmt.Scanf("%f%f", &pess, &agua)
			tPess += pess
			tAgua += agua
			tConsumo := Consumo{tpess: pess, tagua: agua / pess}
			total = append(total, tConsumo)
		}
		chaves := make([]string, 0, len(total))
		fmt.Println(total)
	}

}
https://pkg.go.dev/sort#Float64s