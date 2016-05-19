# atom-fib

[Atom](https://github.com/tomahawkins/atom) (Haskell eDSL) example of
device/driver pair.

This example is due to [Lee
Pike](https://leepike.wordpress.com/2009/05/05/an-atomic-fibonacci-server-exploring-the-atom-haskell-dsl/).
I've just rescued the code from Wayback Machine, cleaned it up a little, and
made it compatible with Atom 1.0.13.

# Usage

Compile the executable:

```
% cabal sandbox init
% cabal install --only-dependencies
% cabal install
```

Then, running the executable will generate `fibDev.{c,h}` and `fibDvr.{c,h}`
and print out the compiled schedules for each.
