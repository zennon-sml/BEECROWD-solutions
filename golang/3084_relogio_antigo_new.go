package main

import "fmt"
import "math"

func main() {
	var h, m float64
	for _, err := fmt.Scan(&h, &m); err == nil; _, err = fmt.Scan(&h, &m) {
		h = math.Floor(h / 30)
		m = math.Floor(m / 6)
    if h < 10 {
      fmt.Printf("0%.0f:", h)
    } else {
      fmt.Printf("%.0f:", h)
    }
    if m < 10 {
		  fmt.Printf("0%.0f\n", m)
    } else {
		  fmt.Printf("%.0f\n", m)
    }
	}
}
