function processData(input) {
    var arr = input.split('\n');
    var n = arr[0];
    
    for(var i=1;i<=n;i++)
        {
            var funny =true;
            var s = arr[i];
            var news = s.split('');
            var ss = news.reverse();
            for(var j=0;j<news.length-1;j++){
               if((Math.abs(news[j+1].charCodeAt(0)-news[j].charCodeAt(0))!==(Math.abs(ss[news.length-j-1].charCodeAt(0)-ss[news.length-j-2].charCodeAt(0))))){
                    funny = false;
                }
                
            }
            if(funny==true){
                console.log('Funny');
            }
            else if(funny==false){
                console.log('Not Funny');
            }
        }
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
