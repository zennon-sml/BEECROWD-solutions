package main

import "fmt"

func main() {
	var n, star int
	var stars []int
	var casas []bool
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &star)
		stars = append(stars, star)
		casas = append(casas, false)
	}
	carneiros := 0
	var act bool
	i := 1
	for i < n {
		if stars[i] == 0 {
			break
		}
		if stars[i]%2 == 0 {
			stars[i]--
			carneiros++
			casas[i] = true
			act = true
		} else {
			stars[i]--
			carneiros++
			casas[i] = true
			act = false
		}
		if act {
			i++
		} else {
			i--
		}

	}
	fmt.Printf("%d %t\n", carneiros, casas)
}
