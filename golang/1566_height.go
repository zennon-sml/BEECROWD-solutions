package main
//Dupla Zennon Sampaio && Lui Richard
import "fmt"

func main() {
	var nc int
	fmt.Scan(&nc)
	for i := 0; i < nc; i++ {
		var n int
		fmt.Scan(&n)
		arr := make([]int, n)
		for j := 0; j < n; j++ {
			fmt.Scan(&arr[j])
		}

		maior := 20
		for j := 0; j < n; j++ {
			if maior < arr[j] {
				maior = arr[j]
			}
		}

		contador := make([]int, maior+1)
		for j := 0; j < n; j++ {
			contador[arr[j]] ++
		}

		arraySorted := make([]int, n)
		index := 0
		for j := 0; j <= maior; j++ {
			if contador[j] != 0 {
				for jj := 0; jj < contador[j]; jj++ {
					arraySorted[index] = j	
					index++
				}
			}
		}

		for j := 0; j < n-1; j++ {
			fmt.Printf("%d ", arraySorted[j])
		}
		fmt.Println(arraySorted[n-1])
	}
}