let n = Int(readLine()!)!

func fibo(_ n: Int) -> Int {
    if n < 2 {
        return n
    }
    return fibo(n - 1) + fibo(n - 2)
}

print(fibo(n))