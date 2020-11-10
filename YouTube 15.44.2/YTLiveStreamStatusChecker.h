//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTPlayerHeartbeatResponseHandlerProtocol-Protocol.h>
#import <Module_Framework/YTSingleVideoMediaStateSideEffectfulObserver-Protocol.h>

@class GIMMe, NSString, YTIPlayabilityStatus;
@protocol YTEventLogger, YTLiveStreamStatusCheckerDelegate, YTSingleVideoObservable;

@interface YTLiveStreamStatusChecker : NSObject <YTSingleVideoMediaStateSideEffectfulObserver, YTPlayerHeartbeatResponseHandlerProtocol>
{
    YTIPlayabilityStatus *_playabilityStatus;
    id <YTSingleVideoObservable> _video;
    id <YTEventLogger> _eventLogger;
    GIMMe *_gimme;
    id <YTLiveStreamStatusCheckerDelegate> _delegate;
    CDUnknownBlockType _offlineBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType offlineBlock; // @synthesize offlineBlock=_offlineBlock;
@property(nonatomic) __weak id <YTLiveStreamStatusCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)checkLivestreamabilityWithPlayabilityStatus:(id)arg1;
- (void)potentiallyMutatedSingleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)populateHeartbeatRequestParams:(id)arg1;
- (void)processPlayabilityStatus:(id)arg1 heartbeatParams:(id)arg2;
- (_Bool)heartbeatShouldRunForPlayabilityStatus:(id)arg1;
- (id)initWithVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

