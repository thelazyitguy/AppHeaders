//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AmazonChimeSDK/AudioClientDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC14AmazonChimeSDK26DefaultAudioClientObserver : NSObject <AudioClientDelegate>
{
    // Error parsing type: , name: audioClient
    // Error parsing type: , name: audioClientStateObservers
    // Error parsing type: , name: clientMetricsCollector
    // Error parsing type: , name: configuration
    // Error parsing type: , name: currentAttendeeSet
    // Error parsing type: , name: currentAttendeeSignalMap
    // Error parsing type: , name: currentAttendeeVolumeMap
    // Error parsing type: , name: currentAudioState
    // Error parsing type: , name: currentAudioStatus
    // Error parsing type: , name: realtimeObservers
    // Error parsing type: , name: logger
    // Error parsing type: , name: audioLock
}

- (void).cxx_destruct;
- (id)init;
- (void)attendeesPresenceChanged:(id)arg1;
- (void)volumeStateChanged:(id)arg1;
- (void)signalStrengthChanged:(id)arg1;
- (void)audioMetricsChanged:(id)arg1;
- (void)audioClientStateChanged:(int)arg1 status:(int)arg2;

@end

