let input = Int(readLine()!)!

for i in 1...input {
    var arr:[Int] = []
    arr = (readLine()?.split(separator: " ").map{Int($0)!})!
    print("Case #\(i): \(arr[0] + arr[1])")
}