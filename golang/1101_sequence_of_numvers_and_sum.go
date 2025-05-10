package main

import "fmt"

func main() {
	for {
		var a, b int
		fmt.Scan(&a, &b)
		if a < 1 || b < 1{
			return
		}
		if a > b {
			temp := a
			a = b
			b = temp
		}
		sum := 0
		for i := a;i <= b; i++ {
			sum += i
			fmt.Printf("%d ", i)
		}
		fmt.Printf("Sum=%d\n", sum)
	}
}