package main

import "fmt"

func main() {
	var n int
	var x, y, total int
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		total = 0
		fmt.Scan(&x, &y)
		if x%2 == 0 {
      x++
    }
    for i := 0; i < y; i++ {
      total+=x
      x+=2
    }
    fmt.Println(total)
	}
}
