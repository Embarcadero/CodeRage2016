# Using Delphi containers from C++

Starting in RAD Studio 10.1 Berlin, many Delphi containers, arrays, and collections can be used with range-based for loops, iterators and <algorithm>, to various degreess. This is sample source code illustrating a few

For more information:
* [Blog post explaining the techniques](https://community.embarcadero.com/blogs/entry/using-delphi-containers-from-c)
* [CodeRage video on mixing languages](https://www.youtube.com/watch?v=fRSOrXY9Yeo&index=5&list=PLwUPJvR9mZHhduLqFX352uV1APPIRAu1h), showing this code and explaining it

Delphi enumeration (for..each, or [] and Count) and C++-based enumeration (ranges, iterators) are quite different, but this is a great example of automatic bridging in the compiler-generated output for Delphi types.