package main

import (
	"fmt"
)

func main() {
	var n int
	for true {
		_, err := fmt.Scanf("%d", &n)
		if err != nil {
			break
		}
		var lista []string
		var str string
		for i := 0; i < n; i++ {
			fmt.Scanf("%s", &str)
			lista = append(lista, str)
		}
		tam := len(lista[0])
		omitidos := 0
		for i := 0; i < tam; i++ {
			for j := 0; j < n-1; j++ {
				if lista[j][i] == lista[j+1][i] {
					omitidos++
					j++
				}
			}
		}
		fmt.Println(omitidos)
	}

}
