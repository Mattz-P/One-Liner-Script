mkdir ~/bin 
cd ~/bin
wget https://github.com/AdoptOpenJDK/openjdk16-binaries/releases/download/jdk-16.0.1%2B9/OpenJDK16U-jre_x64_linux_hotspot_16.0.1_9.tar.gz
tar xzf OpenJDK16U*.tar.gz
mv jdk-* java16
sudo rm OpenJDK16U-jre_x64_linux_hotspot_16.0.1_9.tar.gz
export PATH=$PWD/java16/bin:$PATH
