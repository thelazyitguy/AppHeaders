//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/PlaybackLicenseStrategy-Protocol.h>

@class BladeRunnerPlaybackReporter, ContentKeySession, MonoClockTimestamp, NSString;
@protocol OS_dispatch_queue, PlatformConfigProvider, PlaybackLicenseStrategyDelegate;

@interface BaseLicenseStrategy : NSObject <PlaybackLicenseStrategy>
{
    _Bool _startedPrefetch;
    _Bool _prefetchSuspended;
    _Bool _tearingDown;
    _Bool _startedPlayback;
    id <PlaybackLicenseStrategyDelegate> _playbackLicenseStrategyDelegate;
    NSString *_playbackId;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <PlatformConfigProvider> _playbackConfig;
    MonoClockTimestamp *_ldlDeliveredTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MonoClockTimestamp *ldlDeliveredTimestamp; // @synthesize ldlDeliveredTimestamp=_ldlDeliveredTimestamp;
@property(readonly, nonatomic) __weak id <PlatformConfigProvider> playbackConfig; // @synthesize playbackConfig=_playbackConfig;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSString *playbackId; // @synthesize playbackId=_playbackId;
@property(readonly, nonatomic) __weak id <PlaybackLicenseStrategyDelegate> playbackLicenseStrategyDelegate; // @synthesize playbackLicenseStrategyDelegate=_playbackLicenseStrategyDelegate;
@property(readonly, nonatomic, getter=hasStartedPlayback) _Bool startedPlayback; // @synthesize startedPlayback=_startedPlayback;
@property(readonly, nonatomic, getter=isTearingDown) _Bool tearingDown; // @synthesize tearingDown=_tearingDown;
@property(readonly, nonatomic, getter=isPrefetchSuspended) _Bool prefetchSuspended; // @synthesize prefetchSuspended=_prefetchSuspended;
@property(readonly, nonatomic, getter=hasStartedPrefetch) _Bool startedPrefetch; // @synthesize startedPrefetch=_startedPrefetch;
- (unsigned long long)usedLdlLifespanInSeconds;
- (unsigned long long)unusedLdlLifespanInSeconds;
@property(readonly, nonatomic) __weak BladeRunnerPlaybackReporter *playbackReporter;
@property(readonly, nonatomic) __weak ContentKeySession *contentKeySession;
- (void)playbackLicenseStrategyDelegate:(id)arg1 didDeliverLicenseChallengeResponses:(id)arg2;
- (id)playbackLicenseStrategyDelegate:(id)arg1 didReceiveLicenseChallengeResponses:(id)arg2 error:(id)arg3;
- (void)processLicenseExpiration;
- (_Bool)hasLicenseExpired;
- (void)teardown;
- (void)startPlayback;
- (void)resumePrefetch;
- (void)cancelPrefetch;
- (void)startPrefetch;
- (id)initWithPlaybackLicenseStrategyDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

