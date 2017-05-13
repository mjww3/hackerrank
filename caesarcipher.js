process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
    var n = parseInt(readLine());
    var s = readLine();
    var k = parseInt(readLine());
    var str = s.split('');
    var newstring = '';
    for(var i=0;i<str.length;i++)
        {
            if(str[i].charCodeAt(0)<=122 && str[i].charCodeAt(0)>=97)
                {
                    var num = str[i].charCodeAt(0)+k%26;
                    if(num>122)
                        {
                            num = num-122+96;
                        }
                    str[i] = String.fromCharCode(num);
                }
            else if(str[i].charCodeAt(0)<=90 && str[i].charCodeAt(0)>=65)
                {
                    var num = str[i].charCodeAt(0)+k%26;
                    if(num>90)
                        {
                            num = num-90+64;
                        }
                    str[i] = String.fromCharCode(num);
                }
        }
    var news = str.join('');
    console.log(news);

}
