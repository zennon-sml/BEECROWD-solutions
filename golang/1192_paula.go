package main

import (
	"fmt"
	"strconv"
)

func main() {
	var x int
	var str string
	fmt.Scanf("%d", &x)
	for x > 0 {
		x--
		fmt.Scanf("%s", &str)
		int1, _ := strconv.ParseInt(string(str[0]), 6, 12)
		int2, _ := strconv.ParseInt(string(str[2]), 6, 12)
		if str[0] == str[2] {
			fmt.Println(int1 * int2)
		} else if str[1] > 96 && str[1] < 123 {
			fmt.Println(int2 + int1)
		} else {
			fmt.Println(int2 - int1)
		}
	}

}
