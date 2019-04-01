module Result = Belt.Result;

let (<<): ('b => 'c, 'a => 'b, 'a) => 'c;

let (>>): ('a => 'b, 'b => 'c, 'a) => 'c;

let const: ('a, _) => 'a;

let identity: 'a => 'a;

let unit: unit;

let ok: 'ok => Result.t('ok, 'error);

let error: 'error => Result.t('ok, 'error);