package main

import "fmt"

func main() {
	var l int
	for {
		_, err := fmt.Scan(&l)
		if err != nil {
			break
		}
		bigger := 0
		slug := 0
		for i := 0; i < l; i++ {
			fmt.Scan(&slug)
			if slug > bigger {
				bigger = slug
			}
		} 
		if bigger < 10 {
			fmt.Println(1)
		} else if bigger < 20 {
			fmt.Println(2)
		} else {
			fmt.Println(3)
		}
	}
}