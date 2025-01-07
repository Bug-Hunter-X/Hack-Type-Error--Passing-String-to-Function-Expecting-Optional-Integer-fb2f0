function foo(x: ?int): int {
  if ($x === null) {
    return 0; 
  }elseif(is_int($x)){
    return $x + 1;
  } else {
    throw new Exception("Invalid input type. Expected int or null.");
  }
}

function bar(): void {
  $x = foo(null);
  echo $x; //this will print 0
  $y = foo(5);
  echo $y; // this will print 6
  $z = foo('hello');
  echo $z; //this will produce a compile time error
}
