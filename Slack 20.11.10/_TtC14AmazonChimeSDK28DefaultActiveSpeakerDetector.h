//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC14AmazonChimeSDK28DefaultActiveSpeakerDetector : NSObject
{
    // Error parsing type: , name: speakerScores
    // Error parsing type: , name: activeSpeakers
    // Error parsing type: , name: scoresTimers
    // Error parsing type: , name: hasBandwidthPriority
    // Error parsing type: , name: mostRecentUpdateTimestamp
    // Error parsing type: , name: audioClientObserver
    // Error parsing type: , name: selfAttendeeId
    // Error parsing type: , name: policiesAndCallbacks
    // Error parsing type: , name: timer
}

- (void).cxx_destruct;
- (id)init;
- (void)removeActiveSpeakerObserverWithObserver:(id)arg1;
- (void)addActiveSpeakerObserverWithPolicy:(id)arg1 observer:(id)arg2;
- (void)attendeesDidJoinWithAttendeeInfo:(id)arg1;
- (void)attendeesDidUnmuteWithAttendeeInfo:(id)arg1;
- (void)attendeesDidMuteWithAttendeeInfo:(id)arg1;
- (void)attendeesDidDropWithAttendeeInfo:(id)arg1;
- (void)attendeesDidLeaveWithAttendeeInfo:(id)arg1;
- (void)signalStrengthDidChangeWithSignalUpdates:(id)arg1;
- (void)volumeDidChangeWithVolumeUpdates:(id)arg1;
- (void)hasBandwidthPriorityCallbackWithHasBandwidthPriority:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAudioClientObserver:(id)arg1 selfAttendeeId:(id)arg2;

@end
