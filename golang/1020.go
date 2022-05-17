package main

import (
	"fmt"
	"time"
)

var (
	idade = time.Date(2021, 1, 1, 0, 0, 0, 0, time.UTC)
	b     int
)

func main() {
	fmt.Scanf("%d", &b)

	//td := timeutil.Timedelta{Days: 1t0}
	//result := idade.Add(td.Duration())
	fmt.Println(idade.Year())

}
