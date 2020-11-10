//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTWatchFlowControllerProtocol-Protocol.h"

@class GIMMe, NSString;

@interface YTInlineWatchFlowController : NSObject <YTWatchFlowControllerProtocol>
{
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(id)arg1;
- (void)playbackControllerDidFailWithError:(id)arg1;
- (void)currentPlayerResponseDidChange:(id)arg1;
- (void)clearHistory;
- (void)contentVideoMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (_Bool)playVideoForWatchEndpointSource:(int)arg1;
- (id)autonavController;
- (_Bool)hasPreviousVideo;
- (_Bool)hasNextVideo;
- (_Bool)shouldExitFullScreenOnFinish;
- (_Bool)playPreviousVideo;
- (_Bool)playNextVideo;
- (void)autonavPlayWasPressed;
- (void)playAutoplay;
- (void)setAutoplayController:(id)arg1 autonavController:(id)arg2;
- (void)willMakeWatchTransition:(id)arg1 fromNavigationEndpoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

