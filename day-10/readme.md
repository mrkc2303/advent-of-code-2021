# Day-10: Syntax Scoring
## Part-1
### Problem-Statement

You ask the submarine to determine the best route out of the deep-sea cave, but it only replies:

```Syntax error in navigation subsystem on line: all of them```

**All of them?!** The damage is worse than you thought. You bring up a copy of the navigation subsystem (your puzzle input).

The navigation subsystem syntax is made of several lines containing chunks. There are one or more chunks on each line, and **chunks** contain zero or more other chunks. Adjacent chunks are not separated by any delimiter; if one chunk stops, the next chunk (if any) can immediately start. Every chunk must **open** and **close** with one of four legal pairs of matching characters:

* If a chunk opens with `(`, it must close with `)`.
* If a chunk opens with `[`, it must close with `]`.
* If a chunk opens with `{`, it must close with `}`.
* If a chunk opens with `<`, it must close with `>`.
