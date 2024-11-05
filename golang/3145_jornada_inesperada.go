package main

import "fmt"

func main() {
  var hobbits, distance float32
  fmt.Scan(&hobbits, &distance)
  fmt.Printf("%.2f\n", distance/(hobbits+2))
}
