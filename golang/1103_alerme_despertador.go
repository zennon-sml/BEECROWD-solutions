package main

import (
	"fmt"
	// "time"
)

// func toTime(h string, m string) string {
// 	if len(h) < 2 {
// 		h = "0" + h
// 	}
// 	if len(m) < 2 {
// 		m = "0" + m
// 	}
// 	horario := "2002-05-11T" + h + ":" + m + ":00.000Z"
// 	return horario
//}

func main() {
	var h1, m1, h2, m2 int
	// layout := "2006-01-02T15:04:05.000Z"
	for true {
		fmt.Scanf("%d%d%d%d", &h1, &m1, &h2, &m2)
		if h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0 {
			break
		}
		// dormir := toTime(h1, m1)
		// acordar := toTime(h2, m2)
		// dormirT, _ := time.Parse(layout, dormir)
		// acordarT, _ := time.Parse(layout, acordar)
		// diff := acordarT.Sub(dormirT).Minutes()
		// fmt.Println(diff)
		dormir := h1*60 + m1
		acordar := h2*60 + m2
		if dormir > acordar {
			acordar += 1440
		}
		if acordar == dormir {
			fmt.Println("1440")
		} else {
			fmt.Println(acordar - dormir)
		}
	}
}
