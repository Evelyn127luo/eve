function checkAge(){
    var msg = ''
    var age = document.getElementById("inAge").value
    if(age >= 18 && age < 65) {
        msg = 'You are an adult!'
    }
    else if (age >= 65){
        msg = 'You are a senior'
    }
    else {
        msg = 'You are a MINOR.'
    }
    document.getElementById('outMsg').innerHTML = msg
}