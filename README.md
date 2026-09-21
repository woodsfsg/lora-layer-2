# lora-layer-2
Reliable transmission of packets using LoRaWan

To convert the ASN.1 definition to C code, run the utility provided by ESA (ref: https://github.com/esa/asn1scc) and output the UPER implementation.
Most easily achieved using the docker container as follows:
```
mkdir build
cd build
git clone https://github.com/esa/asn1scc
ASN1SCC=$(pwd)/asn1scc

cd <this directory>/src/layer-2
${ASN1SCC}/asn1-docker.sh -c -uPER lora-layer-2.asn
```
