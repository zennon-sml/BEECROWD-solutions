package main

import "fmt"

func main() {
	var a, b string
	fmt.Scanf("%s\n%s", &a, &b)
	if len(a) >= len(b) {
		fmt.Println("go")
	} else {
		fmt.Println("no")
	}

}
