function areaCalculator() {
    var l = document.getElementById("length").value
    var h = document.getElementById("height").value
    var ans = l * h
    document.getElementById("answer").value = ans
}

function clearAll() {
    document.getElementById("length").value = null
    document.getElementById("height").value = null
    document.getElementById("answer").value = null
}