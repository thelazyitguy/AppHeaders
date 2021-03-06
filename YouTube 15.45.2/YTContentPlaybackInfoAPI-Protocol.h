//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YTIPlaybackContext;
@protocol YTSingleVideoObservable;

@protocol YTContentPlaybackInfoAPI <NSObject>
- (NSString *)CPNForCurrentPlayback;
- (_Bool)isStartUpState;
- (id <YTSingleVideoObservable>)contentVideo;
- (long long)midrollIndex;
- (int)playerVisibility;
- (_Bool)contentPlaybackInfoAvaiable;
- (_Bool)isAirPlayActive;
- (YTIPlaybackContext *)playbackContextForAd;
- (_Bool)isOfflinePlayback;
- (_Bool)autoplayEnabled;
@end

