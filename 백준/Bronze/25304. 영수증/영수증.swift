let x = Int(readLine()!)!
let n = Int(readLine()!)!
var price = 0

for _ in 0..<n {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    price += input[0] * input[1]
}

price == x ? print("Yes") : print("No")