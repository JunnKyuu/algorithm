let t = Int(readLine()!)!
var stack: [Int] = []
for _ in 0..<t {
    let n = Int(readLine()!)!
    if n == 0 {
        stack.removeLast()
    } else {
        stack.append(n)
    }
}

print(stack.reduce(0, +))