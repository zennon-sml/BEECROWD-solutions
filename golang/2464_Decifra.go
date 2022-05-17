package main

import (
	"fmt"
)

func main() {
	alf0 := "abcdefghijklmnopqrstuvwxyz"
	var palav, alf1 string
	fmt.Scanf("%s\n%s", &alf1, &palav)
	decifrado := ""
	for i := 0; i < len(palav); i++ {
		for j := 0; j < 26; j++ {
			if alf1[j] == palav[i] {
				decifrado += string(alf0[j])
				break
			}
		}
	}
	fmt.Println(decifrado)
}
