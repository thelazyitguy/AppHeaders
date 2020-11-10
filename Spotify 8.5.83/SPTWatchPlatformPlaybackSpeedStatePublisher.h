//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastPreferencesObserver-Protocol.h"
#import "SPTWatchPlatformPublisher-Protocol.h"

@class NSString;
@protocol SPTPodcastSpeedControlManager, SPTWatchConnectivityPubSubMessageQueue;

@interface SPTWatchPlatformPlaybackSpeedStatePublisher : NSObject <SPTPodcastPreferencesObserver, SPTWatchPlatformPublisher>
{
    id <SPTWatchConnectivityPubSubMessageQueue> _pubSubMessageQueue;
    id <SPTPodcastSpeedControlManager> _podcastSpeedControlManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTPodcastSpeedControlManager> podcastSpeedControlManager; // @synthesize podcastSpeedControlManager=_podcastSpeedControlManager;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityPubSubMessageQueue> pubSubMessageQueue; // @synthesize pubSubMessageQueue=_pubSubMessageQueue;
- (void)podcastPlaybackSpeedDidUpdate:(id)arg1 oldSpeed:(id)arg2;
- (void)handlePublisherEvent:(long long)arg1;
- (void)publishPlaybackSpeedState;
- (id)initWithPubSubMessageQueue:(id)arg1 podcastSpeedControlManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
