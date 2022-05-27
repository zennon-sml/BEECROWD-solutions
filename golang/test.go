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

func main() {
	now := time.Now()
	fmt.Println(now.Format("Monday 02-01-2006 15:04:05"))
	fmt.Printf(MAE())
}
