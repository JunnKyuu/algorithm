let lineX = readLine()!
let lineY = readLine()!
let x = Int(lineX)!
let y = Int(lineY)!

if(x > 0) {
    if(y > 0) {
        print("1")
    } else {
        print("4")
    }
} else {
    if(y > 0) {
        print("2")
    } else {
        print("3")
    }
}