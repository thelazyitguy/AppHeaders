//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTTheme;
@protocol SPTNowPlayingVideoManager;

@interface SPTNowPlayingHorizontalVideoOverlayViewModel : NSObject
{
    SPTTheme *_theme;
    id <SPTNowPlayingVideoManager> _nowPlayingVideoManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTNowPlayingVideoManager> nowPlayingVideoManager; // @synthesize nowPlayingVideoManager=_nowPlayingVideoManager;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void)presentFullScreenVideo;
- (id)initWithTheme:(id)arg1 nowPlayingVideoManager:(id)arg2;

@end
