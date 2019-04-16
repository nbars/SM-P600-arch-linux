# SM-P600-arch-linux

**UNDER CONSTRUCTION**

This is a collection of packages that allow to run Arch Linux on the
SM-P600 (Samsung Galaxy Note 10.1 2014 WIFI).

### Current state
Currently, Arch Linux is booting on the SM-P600, but most components aren't working or weren't tested.

### Build packages

### Create Arch base image
For creating a base image of Arch Linux, we're using the app [Linux deploy](https://play.google.com/store/apps/details?id=ru.meefik.linuxdeploy&hl=de).
The app requires a rooted android device and a permissive Linux kernel (SELinux disabled) to work.
A permissive kernel for the SM-P600 is available [here](https://github.com/nbars/SM-P600-Permissive-Kernel).

#### Create basic image with Linux Deploy
1. Start Linux Deploy and go into the configuration tab.
2. Select armv7h as architecture
3. Make sure the SSH server is enabled
4. Choose as image destination /data/media/0/linux.img 
5. Select Arch Linux as distribution
6. Press Install

#### Configure Arch basic image

The first step is to copy the SM-P600-* packages
that were build in the build step to the tablet.

```
scp *.pkg.tar.xz android@[tablet_ip]:/home/android
```

Now you need to login on the tablet over SSH and execute
the following steps:

```
sudo pacman -S base wpa_supplicant dialog --needed 
wifi-menu wlan0 #connect to you're wifi (this step will fail, but that's fine) 
netctl enable [wifi_name] #(the name of the wifi you created in the previous step)
cd /home/android
sudo pacman -U *
```
