//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackControllerObserver-Protocol.h"
#import "SPTWatchPlatformPublisher-Protocol.h"

@class NSString, SPTRadioPlaybackService;
@protocol SPTExternalIntegrationContentController, SPTExternalIntegrationObjectFactory, SPTExternalIntegrationPlaybackController, SPTWatchConnectivityPubSubMessageQueue;

@interface SPTWatchPlatformPlayingContextPublisher : NSObject <SPTExternalIntegrationPlaybackControllerObserver, SPTWatchPlatformPublisher>
{
    id <SPTWatchConnectivityPubSubMessageQueue> _pubSubMessageQueue;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTExternalIntegrationContentController> _contentController;
    id <SPTExternalIntegrationObjectFactory> _objectFactory;
    SPTRadioPlaybackService *_radioPlayback;
    NSString *_topic;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) __weak SPTRadioPlaybackService *radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationObjectFactory> objectFactory; // @synthesize objectFactory=_objectFactory;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentController> contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) __weak id <SPTWatchConnectivityPubSubMessageQueue> pubSubMessageQueue; // @synthesize pubSubMessageQueue=_pubSubMessageQueue;
- (_Bool)shouldEvaluateTrackChangesForContextURI:(id)arg1;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (void)handlePublisherEvent:(long long)arg1;
- (void)publishPlayingContextContent:(id)arg1 children:(id)arg2;
- (void)publishPlayingContextWithContextURI:(id)arg1;
- (void)publishPlayingContextWithPlayerState:(id)arg1;
- (id)initWithPubSubMessageQueue:(id)arg1 playbackController:(id)arg2 contentController:(id)arg3 objectFactory:(id)arg4 radioPlayback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

