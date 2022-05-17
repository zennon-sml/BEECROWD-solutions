package main

import (
	"fmt"
)

func main() {
	var array []string
	array = append(array, "1", "2", "3", " 4", "5", "6")
	fmt.Println(array[:1], array[1+1:]...)
}
