function submitForm(form){
    var fn = form.elements.firstname.value //called by id
    var mn = form.elements['middlename'].value //called by id
    var ln = form.elements[3].value
    document.getElementById('outResult').innerHTML = 
    fn + ' ' + mn + ' ' + ln + ' SENT TO SERVER!'
}