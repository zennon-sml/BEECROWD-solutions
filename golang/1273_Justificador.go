package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	var n int
	reader := bufio.NewReader(os.Stdin)
	for true {
		fmt.Scanf("%d", &n)
		if n == 0 {
			break
		}
		for i := 0; i < n; i++ {
			input, _ := reader.ReadString('\n')
			print(strings.Replace(input, " ", "", -1))
		}

	}
}
