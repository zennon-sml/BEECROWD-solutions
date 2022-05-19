package main

import (
	"fmt"
	"sort"
)

func printslice(slice []int) {
	for i := 0; i < len(slice); i++ {
		fmt.Println(slice[i])
	}
}

func main() {
	var a, b, c int
	var tres []int
	fmt.Scanf("%d%d%d", &a, &b, &c)
	tres = append(tres, a, b, c)
	sort.Ints(tres)
	printslice(tres)
	fmt.Println()
	fmt.Println(a)
	fmt.Println(b)
	fmt.Println(c)

}
