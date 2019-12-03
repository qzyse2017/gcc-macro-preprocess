// package main

// func minInt(a int, b int) int {
// 	if a < b {
// 		return a
// 	}
// 	return b
// }

// func minFloat32(a float32, b float32) {
// }

// func minFloat64(a float64, b float64) {
// }

#define min(t,a,b,FuncName)\
func FuncName(a t, b t) t {\
_NL_ if a < b {\
_NL_ return a\
_NL_ }\
_NL_ return b\
_NL_ }\
_NL_\
_NL_

min(int,a,b,minInt)
min(float64,a,b,minFloat32)
min(float64,a,b,minFloat64)

