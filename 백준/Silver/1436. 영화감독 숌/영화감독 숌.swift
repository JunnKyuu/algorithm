let n = Int(readLine()!)!
var count = 0
var result = 665 //1번

while true { //2번
    result += 1 
    let resultChar = String(result) //3번
    var 판별 = 0
    for i in resultChar {

        if i == "6" {
           판별 += 1
        }else {
            판별 = 0
        }

        if 판별 == 3 {
            count += 1
        }
    }

    if n == count {
        print("\(result)")
        break
    }
}