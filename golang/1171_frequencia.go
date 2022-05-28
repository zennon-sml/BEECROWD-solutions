package main

import(
    "fmt"
)

func in(slice []int, n int) (int, bool) {
    for index, i := range slice{
        if n == i{
            return index, false
        }
    }
    return 0, true
}

func min(slice []int) (int, int){
    menor := slice[0]
    var index1 int
    for index, item := range slice{
        if item < 2001{
        if item < menor{
            menor = item
            index1 = index
        }}
    }
    return menor, index1
}

func main(){
    var n,n1 int
    var slice, slice1, slice2, slice3 []int
    fmt.Scanf("%d", &n)
    for n > 0{
        n--
        fmt.Scanf("%d", &n1)
		index, inout := in(slice, n1)
        if inout{
            slice = append(slice, n1)
            slice1 = append(slice1, 1)
        }else{
            slice1[index]++
        }
    }//endfor
    tam := len(slice)
    for i := 0;i < tam;i++{
        menor, mindex := min(slice)
        slice2 = append(slice2, menor)
        slice3 = append(slice3, slice1[mindex])
        slice[mindex] = 2001
    }
    for index, item := range slice2{
        fmt.Printf("%d aparece %d vez(es)\n", item, slice3[index])
    }
}
