#include <Dhcp.h>
#include <Dns.h>
#include <SPI.h>
#include <Ethernet.h>
#include <EthernetClient.h>
#include <EthernetServer.h>
#include <EthernetUdp.h>
#include <util.h>

// the media access control (ethernet hardware) address for the shield:
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };  
//the IP address for the shield:
byte ip[] = { 10, 10, 0, 111 };   EthernetEthernet 

void setup()
{
  Ethernet.begin(mac, ip);
}

void loop () {}


