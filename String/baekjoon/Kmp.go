package main

import "fmt"

func getPi(p string) []int {
	n := len(p)
	pi := make([]int, n)
	j := 0

	for i := 1; i < n; i++ {
		for j > 0 && p[i] != p[j] {
			j = pi[j-1]
		}
		if p[i] == p[j] {
			j += 1
			pi[i] = j
		}
	}

	return pi
}

func kmp(t, p string) (ret []int) {
	n := len(t)
	pi := getPi(p)
	j := 0

	for i := 0; i < n; i++ {
		for j > 0 && t[i] != p[j] {
			j = pi[j-1]
		}

		if t[i] == p[j] {
			if j >= len(p)-1 {
				ret = append(ret, i-len(p)+1)
			} else {
				j++
			}
		}
	}

	return
}

func main() {
	var T, P string
	fmt.Scanln(&T)
	fmt.Scanln(&P)

	ret := kmp(T, P)

	fmt.Println(len(ret))
	for _, v := range ret {
		fmt.Printf("%d ", v+1)
	}
	fmt.Println()
}
