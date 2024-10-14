package main

import "fmt"

func main() {
  var a, b int
  fmt.Scan(&a, &b)
  if a > b {
    var aux = a
    a = b
    b = aux
  }
  for i := a+1; i < b; i++ {
    if i%5 == 2 || i%5 == 3 {
      fmt.Println(i)
    }
  }
}
