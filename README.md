# pstros-nds
J2ME MIDP implementation

Here is the incomplete implementation of MIDP J2ME profile for NDS based on Pstros.
It's incomplete because of the license of the original code (missing in this repo)
does not permit source code sharing. So in here, you can only find Pstros code and
the GBA/NDS porting code made by Torlus and by davr, but not the VM itself.

The directory structure matches the j2me_cldc Sun's project. Unless you have the
j2me_cldc source code this Pstros project won't compile. But at least it gives
an idea how the microedition class implementation was done in Pstros, plus the
implementation of native methods for KNI (slightly different take on JNI) is 
present as well. It can be used as a starting point for implementations of MIDP 
on other JVMs.
