package main

import (
	"fmt"
    "sort"
    "math"
)

type Consumo struct {
	tpess float64
	tagua float64
}

func Round(x, uint float64) float64{
	return math.Round(x/uint) * uint
}

func main() {
	var n int
    count := 0
	for true {
        count++
		fmt.Scanf("%d", &n)
		if n == 0 {
			break
		}
		if count > 1{
			fmt.Println()
		}
		var pess, agua float64
		var total []Consumo
		tPess := 0.0
		tAgua := 0.0
		for i := 0; i < n; i++ {
			fmt.Scanf("%f%f", &pess, &agua)
			tPess += pess
			tAgua += agua
			tConsumo := Consumo{tpess: pess, tagua: math.Trunc(agua / pess)}
			total = append(total, tConsumo)
		}
		for i := 0; i < n;i++{
			for j := i+1; j < n;j++{
				if total[i].tagua == total[j].tagua{
					total[i].tpess += total[j].tpess
					total[j].tpess = 0
					total[j].tagua = 0
				}
			}
		}
        sort.SliceStable(total, func(i, j int) bool {
            return total[i].tagua < total[j].tagua
        })
	    fmt.Printf("Cidade# %d:\n", count)
        for i := 0;i < n-1;i++{
			if total[i].tpess > 0 && total[i].tagua > 0{
				fmt.Printf("%.0f-%.0f ", math.Floor((total[i].tpess*100) / 100), math.Floor((total[i].tagua*100) / 100))
			}
		}
        fmt.Printf("%.0f-%.0f\n",  math.Floor((total[n-1].tpess*100) / 100), math.Floor((total[n-1].tagua*100) / 100))
		fmt.Printf("Consumo medio: %.2f m3.\n", (math.Trunc(tAgua / tPess * 100)) / 100)
    }

}
