package main

import "fmt"

func main() {
  var inicio, encon, consu int
  fmt.Scan(&inicio, &encon, &consu)
  t1 := (inicio+encon)/consu
  t2 := (inicio+encon)%consu + t1
  for t2 >= consu {
    t1 += t2/consu
    t2 += t2%consu
    t2 = t2/consu
  }
  fmt.Println(t1)
}

