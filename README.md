# One-Liner Scripts Collections

Java 16

`
wget https://raw.githubusercontent.com/Mattz-P/Java-16-on-ubuntu-one-liner-script/main/ujava16.sh && sudo sh ujava16.sh
`

Swap

`wget https://raw.githubusercontent.com/Mattz-P/One-Liner-Script/main/swap.sh && sudo sh swap.sh 4G`

Xray - Proxy

`wget -N --no-check-certificate -q -O install.sh "https://raw.githubusercontent.com/wulabing/Xray_onekey/nginx_forward/install.sh" && chmod +x install.sh && bash install.sh
`

Docker Install:

```
apt-get update && apt-get install curl -y
curl -fsSL https://get.docker.com > docker_installer.sh
chmod +x ./docker_installer.sh && ./docker_installer.sh
```

Add VPN to Ubuntu

```
sudo apt-get update
sudo apt-get install network-manager-strongswan

openssl pkcs12 -in *.p12 -cacerts -nokeys -out ikev2CA.cer
openssl pkcs12 -in *.p12 -clcerts -nokeys -out ikev2.cer
openssl pkcs12 -in *.p12 -nocerts -nodes  -out ikev2.key
```

Apple

```sh -c "$(curl -fsSL https://raw.githubusercontent.com/Mattz-P/One-Liner-Script/main/apple.sh)"```
