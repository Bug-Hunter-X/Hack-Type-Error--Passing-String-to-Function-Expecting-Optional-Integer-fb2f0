function foo(x: ?int): int {
  if (x == null) {
    return 0; 
  }
  return x + 1;
}

function bar(): void {
  $x = foo(null);
  echo $x; //this will print 0
  $y = foo(5);
  echo $y; // this will print 6
  $z = foo('hello');
  echo $z; //this will produce a type error
}
