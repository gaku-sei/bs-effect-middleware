open Jest;
open Pervasives;
module Result = Belt.Result;

describe("Pervasives", () => {
  open Expect;

  test("<<", () => {
    let f = (+) @@ 10;
    let g = ( * ) @@ 2;
    expect((f << g) @@ 5) |> toBe(20);
    expect((f << g) @@ 5) |> toBe(f(g(5)));
  });

  test(">>", () => {
    let f = (+) @@ 10;
    let g = ( * ) @@ 2;
    expect((f >> g) @@ 5) |> toBe(30);
    expect((f >> g) @@ 5) |> toBe(g(f(5)));
  });

  test("const", () => {
    let f = (+) @@ 10;
    expect(const(5, f)) |> toBe(5);
  });

  test("identity", () =>
    expect(identity(5)) |> toBe(5)
  );

  test("unit", () =>
    expect(unit) |> toBe()
  );

  test("ok", () =>
    expect(ok(5)) |> toEqual(Result.Ok(5))
  );

  test("error", () =>
    expect(error(5)) |> toEqual(Result.Error(5))
  );
});