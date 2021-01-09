/**
 * File              : B.go
 * Author            : Bao To Hoai
 * Date              : 20.12.2020 10:16:51 UTC+7
 * Last Modified Date: 20.12.2020 10:26:39 UTC+7
 * Last Modified By  : Bao To Hoai
 */

package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := n; i > 0; i-- {
        if n % i == 0 {
            fmt.Printf("%v ", i);
            n = i;
        }
    }
}
