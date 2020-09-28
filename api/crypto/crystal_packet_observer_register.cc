#include "crystal_packet_observer_register.h"

crystal::rtc::PacketObserver *packet_observer;
extern "C" void registerPacketObserver(crystal::rtc::PacketObserver *packetObserver) {
    packet_observer = packetObserver;
}