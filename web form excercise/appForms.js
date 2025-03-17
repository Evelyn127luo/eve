function submitInfo() {
    var fn = document.getElementById('fname').value
    var ln = document.getElementById('lname').value

    if(fn == ' ' && ln == ' '){
        alert('Please enter your full name!')
    }
    else{
        alert('\nYour application is succesfully submitted!\n' + fn + ' ' + ln)
    }
    
}

function resetInfo() {
    document.getElementById('fname').value = null
    document.getElementById('lname').value = null
    document.getElementById('dob').value = null
    document.getElementById('age').value = null
    document.getElementById('email').value = null
    document.getElementById('pw').value = null
    document.getElementById('pw2').value = null
    document.getElementById('pos').value = null
    document.getElementById('lang').value = null

}