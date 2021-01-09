/**
 * File              : A.go
 * Author            : Bao To Hoai
 * Date              : 20.12.2020 10:30:41 UTC+7
 * Last Modified Date: 20.12.2020 10:38:17 UTC+7
 * Last Modified By  : Bao To Hoai
 */
package main

import (
    "fmt"
)

func main() {
    var s string
    fmt.Scan(&s)
    k := 0
    a := "hello"
    for i := 0; i < len(s); i++ {
        if k < len(a) && s[i] == a[k] {
            k++
        }
    }
    if k == len(a) {
        fmt.Println("YES")
    } else {
        fmt.Println("NO")
    }
}
