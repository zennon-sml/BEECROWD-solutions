package main

import "fmt"

func newslice(n int) []int {
	var slice []int
	for i := 0; i < n; i++ {
		slice = append(slice, 0)
	}
	return slice
}

func swap(n []int, op int) []int{
    if op == 1{
        temp := n[0]
        n[0] = n[1]
        n[1] = temp
    }else if op == 2{
        temp := n[1]
        n[1] = n[2]
        n[2] = temp
    }else{
        temp := n[0]
        n[0] = n[2]
        n[2] = temp
    }
    return n
}

func index(n []int) int{
    for i:= 0;i < len(n);i++{
        if n[i] == 1{
            return i
        }
    }
    return 0
}
func main(){
    var n int
    fmt.Scanf("%d", &n)
    var z rune
    x := newslice(3)
    fmt.Scanf("%c", &z)
    if z == 65{
        x[0] = 1
    }else if z == 66{
        x[1] = 1
    }else{
        x[2] = 1
    }
    var op int
    fmt.Scanf("%d", &op)
    for n > 0{
        n--
        fmt.Scanf("%d", &op)
        x = swap(x, op)
    }
    fmt.Printf("%c\n", 65 + index(x))

}
