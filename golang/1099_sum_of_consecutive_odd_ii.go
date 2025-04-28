package main

import "fmt"

func swapBiggerX(x, y *int) {
	if *x > *y {
		temp := *x
		*x = *y
		*y = temp
	}

}

func main() {
	var n int
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		sum := 0
		var x, y int
		sum = 0
		fmt.Scanf("%d%d", &x, &y)
		swapBiggerX(&x, &y)
		for j2 := x+1; j2 < y; j2++ {
			if j2 % 2 != 0 {
				sum += j2
			}
		}
		fmt.Println(sum)
	}
}