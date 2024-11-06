package main

import "fmt"

func main() {
  var x1, y1, x2, y2, x, y, n int
  count := 1
  for fmt.Scan(&x1, &y1, &x2, &y2); x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0; fmt.Scan(&x1, &y1, &x2, &y2) {
    fmt.Scan(&n)
    meteoros := 0
    for i := 0; i < n; i++ {
      fmt.Scan(&x, &y)
      if x >= x1 && x <= x2 && y >= y2 && y <= y1 {
        meteoros++
      }
    }
    fmt.Printf("Teste %d\n", count)
    fmt.Println(meteoros)
    count++
  }

}
