function processData(input) {
    var patt = /aa|bb|cc|dd|ee|ff|gg|hh|ii|jj|kk|ll|mm|nn|ll|oo|pp|qq|rr|ss|tt|uu|vv|ww|xx|yy|zz/g;
    var res=input;
    
    while(patt.test(res))
        {
            res = res.replace(patt,'');
        }
    if(res.length===0)
        {
            console.log('Empty String');
        }
    else
        {
            console.log(res);
        }
    //Enter your code here
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
