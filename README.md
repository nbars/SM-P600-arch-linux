# SM-P600-arch-linux

**UNDER CONSTRUCTION**

This is a collection packages that allows to run arch Linux on the
SM-P600 (Samsung Galaxy Note 10.1 2014 WIFI).

### Create arch base image
For creating an base image of arch linux we're using the app [Linux deploy](https://play.google.com/store/apps/details?id=ru.meefik.linuxdeploy&hl=de).
The app requires a rooted android device and a permissive linux kernel (SELinux disabled) to work.
A permissive kernel for the SM-P600 can be found [here](https://github.com/nbars/SM-P600-Permissive-Kernel).

#### Fixing Linux Deploy
Currently (14.09.16) there is a bug in Linux Deploy that leads to an error
while installing arch Linux on the SM-P600. To resolve the issue, the package lz4 has to be added to the dependencies of the arch Linux installation script. This script can be found at
	
	/data/data/ru.meefik.linuxdeploy/files/share

in line 1505 the package lz4 must be added to the basic_packges string:

	local basic_packages="lz4 filesystem acl...
	
#### Create basic image with Linux Deploy
1. Start Linux Deploy and go into the configuration tab.
2. Select armv7h as architecture
3. Make sure the SSH server is enabled
4. Choose as image destination /data/media/0/linux.img (TODO: add option to change location)
5. Select Arch Linux as distribution
6. Press Install

#### Configure Arch installation
pacman -S dialog wpa_supplicant dhcpcd
wifi-menu wlan0 (will fail)
netctl enable [wifi_name
systemctl enable dhcpcd]
copy packages
scp out/* android@192.168.1.20:/home/android
As android user on tablet
cd
sudo pacman -U *
sudo rm /etc/mtab
sudo ln -s /proc/self/mounts /etc/mtab
echo "#empty" > /etc/udev/rules.d/60-persistent-v4l.rules






