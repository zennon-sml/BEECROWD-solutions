package main

import "fmt"

func main() {
  var b, g int
  fmt.Scan(&b, &g)
  r := g/2-b
  if r == 0 {
    fmt.Println("Amelia tem todas bolinhas!")
  }else{
    fmt.Printf("Faltam %d bolinhas(s)\n", r)
  }
}
