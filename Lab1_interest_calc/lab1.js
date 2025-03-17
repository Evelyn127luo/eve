//Created by Evelyn Luo
//Date January 14 2025
//CIS 123

function calcPercentage() {
    //variables fro inputs
    var dep = document.getElementById("Deposit").value
    var interRate = document.getElementById("Interest").value
    
    //variables that calculates
    var total = dep * (1 + interRate / 100)
    
    //assign variable to elemnt id
    document.getElementById("Balance").value = total
}