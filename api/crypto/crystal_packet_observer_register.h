#include "api/crypto/crystal_packet_observer.h"
#include <jni.h>

extern "C" void JNIEXPORT registerPacketObserver(crystal::rtc::PacketObserver *packetObserver);