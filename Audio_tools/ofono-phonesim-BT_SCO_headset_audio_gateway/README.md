### ofono + ofono-phonesim

#### ofono source code

	$ git clone git://git.kernel.org/pub/scm/network/ofono/ofono.git
	or
	$ sudo apt install ofono ## current version is 1.31 for Ubuntu 20.04 LTS

#### ofono-phonesim source code - how to build ofono-phonesim git?

##### Phase 1

	$ git clone git://git.kernel.org/pub/scm/network/ofono/phonesim.git
	$ cd phonesim
	$ ./bootstrap

To avoid a stupid/idiotic error: while exec ./bootstrap-configure:

	checking for QT... no
	configure: error: Qt is required

The following should be done:

##### Why does ./configure not find Qt5? Needed for building phonesim from source
https://askubuntu.com/questions/1394364/why-does-configure-not-find-qt5-needed-for-building-phonesim-from-source

Reproducible method would be an adaptation of already known answer - 
compile the software using deb-src from PPA repository:

	$ sudo add-apt-repository -s ppa:smoser/bluetooth
	$ sudo apt-get update
	$ sudo apt-get build-dep ofono-phonesim # will install all dependencies

##### Phase 2

	$ ./bootstrap-configure
	$ ./configure --prefix=/usr
	$ make
	$ sudo make install

#### Cleaning the source tree

The program binaries and object files can be removed from the
source code directory by typing `make clean'. To also remove the
files that `configure' created (so the package can be compiled
for a different kind of computer), the command `make distclean'
could be issued.  There is also a `make maintainer-clean' target,
but that is intended mainly for the package's developers. If
used, there will be the nned to get all sorts of other programs
in order to regenerate files that came with the distribution.

#### Installing ofono-phonesim from some third-party PPA
https://askubuntu.com/questions/1242450/when-will-add-ofono-phonesim-to-the-focal-repository-20-04

The package was removed from Debian Unstable at 2019-09-13, so it will
not be until official port to Qt5.

Also, it could be installed it from some third-party PPA for both 20.04
LTS and 20.10:

	$ sudo add-apt-repository ppa:smoser/bluetooth
	$ sudo apt-get update
	$ sudo apt-get install ofono-phonesim

#### Optional commands

	$ which phonesim
	/usr/bin/phonesim
	$ /usr/bin$ ln -s /usr/bin/phonesim ofono-phonesim
