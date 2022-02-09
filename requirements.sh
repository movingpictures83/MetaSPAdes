sudo apt install curl
cd /tmp
curl -sSLO http://cab.spbu.ru/files/release3.12.0/SPAdes-3.12.0.tar.gz
tar -xzf SPAdes-3.12.0.tar.gz
cd SPAdes-3.12.0
PREFIX=/usr/local ./spades_compile.sh
