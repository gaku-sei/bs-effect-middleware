module Result = Belt.Result;

let (<<) = (f, g, x) => f(g(x));

let (>>) = (f, g, x) => g(f(x));

let const = (x, _) => x;

let identity = x => x;

let unit = ();

let ok = x => Result.Ok(x);

let error = e => Result.Error(e);