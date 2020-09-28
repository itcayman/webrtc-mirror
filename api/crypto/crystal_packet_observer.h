#ifndef CRYSTAL_PACKET_OBSERVER_H
#define CRYSTAL_PACKET_OBSERVER_H
#include <stddef.h>
#define LOG_TAG "RTCLOG_Native"
#define HEADER_INDEX 100
#include <android/log.h>
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

namespace crystal {
    namespace rtc {
        class PacketObserver {
        public:
            PacketObserver();
            virtual ~PacketObserver();
            struct Packet {
                const unsigned char *buffer;
                const size_t size;
            };

            virtual bool onSendAudioPacket(Packet &packet) = 0;
            virtual bool onSendVideoPacket(Packet &packet) = 0;
            virtual bool onReceiveAudioPacket(Packet &packet) = 0;
            virtual bool onReceiveVideoPacket(Packet &packet) = 0;
        };
    }
}
extern crystal::rtc::PacketObserver *packet_observer;
#endif