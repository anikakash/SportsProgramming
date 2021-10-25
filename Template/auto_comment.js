var count = 20;
var message = "#savebangladeshihindus";
 
var loop = setInterval(function(){
    var input = document.getElementsByName("comment_text")[0];
    var submit = document.querySelector('button[type="submit"]');
    submit.disabled = false;
    input.value = message;
    console.log(count)
  
    submit.click();
    count -= 1;
    if(count == 0)
    {
        clearInterval(loop);
    }
}, 10000);