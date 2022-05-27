package main

import (
	"fmt"
	"time"
)

func main() {
	var dia, mes, dia1, mes1 string
	fmt.Scanf("%s%s", &dia, &mes)
	fmt.Scanf("%s%s", &dia1, &mes1)

	layout := "2006-01-02T15:04:05.000Z"
	if len(dia) < 2 {
		dia = "0" + dia
	}
	if len(mes) < 2 {
		mes = "0" + mes
	}
	if len(dia1) < 2 {
		dia1 = "0" + dia1
	}
	if len(mes1) < 2 {
		mes1 = "0" + mes1
	}
	data1 := "2002-" + mes + "-" + dia + "T00:00:00.000Z"
	data2 := "2002-" + mes1 + "-" + dia1 + "T00:00:00.000Z"
	data3, _ := time.Parse(layout, data1)
	data4, _ := time.Parse(layout, data2)
	dias := data4.Sub(data3).Hours() / 24
	fmt.Println(dias)

}
