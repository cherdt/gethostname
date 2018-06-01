gethostname
===========

A really simple C program that prints out the hostname.


Why?
----

Postfix uses the gethostname() function to set the $myhostname variable.

I wanted to see what the results of that function were directly (although the `hostname` command presumably uses the same underlying function).

See `man gethostname` for details on the function.

See [myhostname](http://www.postfix.org/postconf.5.html#myhostname) for details on the Postfix configuration.


How?
----

To compile for your system:

    make

To run the resulting binary:

    ./gethostname


Did you really make a Git repo for this?
----------------------------------------

Sure. Why not?
