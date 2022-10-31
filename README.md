# FOSS Shitpost Generator
Generates generic questions about FOSS-projects that lead to nowhere. To compile simply run `make`.

By default the program only prints out one question, but if you need more, simply give it a number as the first argument. Repeatedly running the shitpost generator will keep returning the same results due to using time as randomness seed

To add new topics or questions etc., simply modify the Topics.hpp headerfile

**Example output**
```
$ ./foss-shitpost-generator 10
When will Trinity version 7.4.5 be in Topologilinux repositories?
When will Lumina version 7.2.0 be in Tiny Core Linux repositories?
What terminal emulator is the easiest to use?
Which window manager is the most customizable?
Is dash usable out of the box?
When will Lumina version 6.5.5 be in Smallfoot repositories?
What distro looks better? Ubuntu JeOS or Chromium OS
Is ROXTerm difficult to use?
Which window manager has the least users?
Which shell has more users? fish or powershell
```
