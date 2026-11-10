# libsegfault-bdplay
Browsers on some old MediaTek/MStar Blu-ray players with access to internet have a "browser.sh" file which runs to setup the browser environment and start the browser. MediaTek appears to have left a line in this browser.sh file which originally would have been inserted for debugging purposes. The line is as follows:

`export LD_PRELOAD=/mnt/sda1/bbb/libSegFault.so`

/mnt/sda1 is the first USB drive mounted, and LD_PRELOAD causes this library to be loaded before the executable (browser). This appears to affect many Sony and Panasonic players.

This repository has a code sample for compiling this library that runs a file called "script.sh" on the root of a USB drive. All of it will run as `root`, which means you can even start the telnet daemon and assign a password to `root`, then connect to the player with your PC via telnet. You can find a prebuilt binary for ARMv6 in releases.

Note: some of these players use ARMv6 processors, so you will have to compile the library for that arch if that's the case.

If you are a regular user or don't know how to compile this, you may use the prebuilt lib in Releases.

# Usage
Create a folder called `bbb` on your USB drive and copy libSegFault.so there. Copy your own script.sh to the root of your USB drive. Insert it into the player and open the browser app.
Your USB has to be MBR and formatted in fat32.

# Credits
Thanks to Matthew Garrett for noticing this entry point. You can read his post about it [here](http://mjg59.dreamwidth.org/31178.html).

This was taken from [here.](http://www.malcolmstagg.com/bdp/firmware-less.html) This was not made by me.
