input.onButtonPressed(Button.A, function () {
    let dotAscii = ".".charCodeAt(0)
    blink = false
    Question = randint(0, 19)
    pins.i2cWriteNumber(
    EightBallI2CAddress,
    Question,
    NumberFormat.Int8LE,
    false
    )
    let Answer = pins.i2cReadBuffer(EightBallI2CAddress,
    32, false)
answerString = ""
    for (let i = 0; i <= 31; i++) {
        let charNum = Answer.getNumber(NumberFormat.UInt8LE, i)
if (charNum > 0) {
            answerString = "" + answerString + String.fromCharCode(charNum)
        }
        if (charNum == dotAscii) {
            break;
        }
    }
    basic.showString(answerString)
    blink = true
})
let answerString = ""
let Question = 0
let dotAscii = ""
let EightBallI2CAddress = 0
let blink = false
blink = true
EightBallI2CAddress = 8
basic.forever(function () {
    if (blink) {
        basic.pause(200)
        led.toggle(2, 2)
    }
})
