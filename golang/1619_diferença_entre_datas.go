package main

import (
	"fmt"
	"math"
	"time"
)

func main() {
	var oldata, newdata string
	var n int
	fmt.Scanf("%d", &n)
	layout := "2006-01-02T15:04:05.000Z"
	for n > 0 {
		n--
		fmt.Scanf("%s%s", &oldata, &newdata)
		oldata += "T00:00:00.000Z"
		newdata += "T00:00:00.000Z"
		old, _ := time.Parse(layout, oldata)
		new, _ := time.Parse(layout, newdata)
		days := new.Sub(old).Hours() / 24
		fmt.Println(math.Abs(days))
	}

}
