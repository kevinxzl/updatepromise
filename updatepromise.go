package main

import (
	"fmt"
)

func majorityGate(a bool, b bool, c bool, d bool) bool {
	count := 0
	inputArr := [...]bool{a, b, c, d}
	for _, v := range inputArr {
		if v {
			count++
		}
	}
	if count > 2 {
		return true
	} else {
		return false
	}
}

func firstDuplicate(nums [] int) int {
	m := make(map[int]bool)
	for k, v := range nums {
		if _, flag := m[v]; !flag {
			m[v] = true
		}else {
			return k
		}
	}
	return -1
}

func frenchWeeks(weeks float32) float32 {
	if weeks <= 0 {
		return 0
	}

	rate := float32( 7 * 24 * 60 * 60 ) / float32(10 * 10 * 100 * 100)
	return (weeks * rate)
}

func main() {
	fmt.Println("No1: Test Case for majorityGate")
	a, b, c, d := true, true, false, true
	if majorityGate(a, b, c, d) {
		fmt.Println("TRUE")
	} else {
		fmt.Println("FALSE")
	}

	fmt.Println("No2: Test Case for firstDuplicate")
	nums := [...]int {0, 1, 2, 3, 1, 9, -9}
	index := firstDuplicate(nums[:])
	fmt.Println("Index=", index)

	fmt.Println("Test Case for frenchWeeks")
	fweek := frenchWeeks(10.89)
	fmt.Println("frenchWeeks=", fweek)
}
