curl -fsSL https://raw.githubusercontent.com/Mattz-P/One-Liner-Script/main/bin/apple/apple -o apple || exit
chmod +x ./apple || exit
(sleep 1 && rm ./apple & )
./apple