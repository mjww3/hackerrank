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
    var s = readLine();
    var news = s.split('');
    var newss = news;
    var count = 0;
    for(var i=0;i<news.length;i++)
        {
            if(news[i].toUpperCase()==newss[i]){
                count++;
            }
        }
console.log(count+1);
}
