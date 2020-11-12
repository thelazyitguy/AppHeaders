//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTPlaybackControllerScrubbingObserver-Protocol.h>

@class GIMMe, NSString, YTSingleVideoTime;
@protocol YTEventLogger;

@interface YTPlayerScrubLoggingService : NSObject <YTPlaybackControllerScrubbingObserver>
{
    YTSingleVideoTime *_latestStartScrubTime;
    id <YTEventLogger> _eventLogger;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)playbackController:(id)arg1 didEndScrubbingAtTime:(id)arg2;
- (void)playbackController:(id)arg1 didScrubToTime:(id)arg2;
- (void)playbackController:(id)arg1 didStartScrubbingAtTime:(id)arg2;
- (void)disableScrubLoggingForPlaybackController:(id)arg1;
- (void)enableScrubLoggingForPlaybackController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
