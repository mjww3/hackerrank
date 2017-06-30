function processData(input) {
  var letters = input.replace(/\s/g, '').toLowerCase().split('');
  var countDistinctLetters = letters.filter(function (x, pos) { return letters.indexOf(x) === pos; }).length;
  process.stdout.write(countDistinctLetters === 26 ? 'pangram' : 'not pangram');
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
