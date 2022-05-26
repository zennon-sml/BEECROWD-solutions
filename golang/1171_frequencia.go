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

func deleteMin(slice []int) (int, int){
    menor := slice[0]
    var index1 int
    for index, item := range slice{
        if item < menor{
            menor = item
            index1 = index
            slice[index]
        }
    }
    return menor, index1
}

func main(){
    var n,n1 int
    var slice, slice1 []int
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

    for index, item := range slice{
        fmt.Printf("%d aparece %d vez(es)\n", item, slice1[index])
    }
}
