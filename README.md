My build of slock - simple screen locker
========================================
simple screen locker utility for X. Forked from https://tools.suckless.org/slock/


Requirements
------------
In order to build slock you need the Xlib header files.
* Xlib headers
* imlib2-devel
* libXinerama-devel


Applied patched
---------------

* blur pixelated screen/
* message


Installation
------------
Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

    make clean install


Running slock
-------------
Simply invoke the 'slock' command. To get out of it, enter your password.

* `-m <message>` specify a message (optional)
* `-f` List font names
