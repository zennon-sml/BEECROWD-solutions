package main

import "fmt"

func main() {
  c := make(map[string]string)
  c["brasil"] = "Feliz Natal!"
  c["alemanha"] = "Frohliche Weihnachten!"
  c["austria"] = "Frohe Weihnacht!"
  c["coreia"] = "Chuk Sung Tan!"
  c["espanha"] = "Feliz Navidad!"
  c["grecia"] = "Kala Christougena!"
  c["estados-unidos"] = "Merry Christmas!"
  c["inglaterra"] = "Merry Christmas!"
  c["australia"] = "Merry Christmas!"
  c["portugal"] = "Feliz Natal!"
  c["suecia"] = "God Jul!"
  c["turquia"] = "Mutlu Noeller"
  c["argentina"] = "Feliz Navidad!"
  c["chile"] = "Feliz Navidad!"
  c["mexico"] = "Feliz Navidad!"
  c["antardida"] = "Merry Christmas!"
  c["canada"] = "Merry Christmas!"
  c["irlanda"] = "Nollaig Shona Dhuit!"
  c["belgica"] = "Zalig Kerstfeest!"
  c["italia"] = "Buon Natale!"
  c["libia"] = "Buon Natale!"
  c["siria"] = "Milad Mubarak!"
  c["marrocos"] = "Milad Mubarak!"
  c["japao"] = "Merii Kurisumasu!"

  var country string
  //read until the end of line, and keep reading
  for _, err := fmt.Scan(&country); err == nil; _, err = fmt.Scan(&country) {
    value, exists := c[country]
    if exists {
      fmt.Println(value)
    } else {
      fmt.Println("--- NOT FOUND ---")
    }
  }
}

