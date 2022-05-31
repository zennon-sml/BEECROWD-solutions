package main

import (
	"fmt"
	"time"
)

func MAE() string { //return a message according with the time(Morning, Afternoon, Evening)
	now := time.Now()
	if now.Hour() > 4 && now.Hour() < 12 {
		return "its " + now.Format("15:04") + " in this beautifull Morning\n"
	} else if now.Hour() > 12 && now.Hour() < 18 {
		return "its " + now.Format("15:04") + " in this beautifull Afternoon\n"
	} else {
		return "its " + now.Format("15:04") + " in this beautifull Evening\n"
	}
}

type consumo struct {
	pess float64
	agua float64
}

func main() {
	dick := consumo{pess: 1, agua: 2}
	fmt.Println(dick.pess)
	fmt.Println(dick.agua)

}
