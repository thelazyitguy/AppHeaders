//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStatefulPlayerObserver-Protocol.h"

@class NSString, NSURL, SPTStatefulPlayer, SPTTheme;
@protocol GLUEImageLoader, SPTGLUEImageLoaderFactory, SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate;

@interface SPTNowPlayingBarLeftAccessoryCoverArtViewModel : NSObject <SPTStatefulPlayerObserver>
{
    id <SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate> _delegate;
    SPTStatefulPlayer *_statefulPlayer;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    SPTTheme *_theme;
    id <GLUEImageLoader> _nextTrackImageLoader;
    NSURL *_currentImageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *currentImageURL; // @synthesize currentImageURL=_currentImageURL;
@property(readonly, nonatomic) id <GLUEImageLoader> nextTrackImageLoader; // @synthesize nextTrackImageLoader=_nextTrackImageLoader;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(nonatomic) __weak id <SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playerDidUpdateTrackPosition:(id)arg1;
- (void)playerDidUpdatePlaybackControls:(id)arg1;
- (void)playerDidReceiveStateUpdate:(id)arg1;
- (void)loadTrackImageIfNeeded;
- (void)player:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (id)initWithStatefulPlayer:(id)arg1 imageLoaderFactory:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
