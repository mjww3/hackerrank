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
    h = readLine().split(' ');
    h = h.map(Number);
    var word = readLine();
    var len = word.length;
    var maxh = 0;
    for(var i=0;i<len;i++)
        {
            var w =word[i];
            var ind =w.charCodeAt(0)-97;
            if(h[ind]>maxh)
                {
                    maxh = h[ind];
                }
        }
    var area = maxh*len;
    console.log(area);

}
