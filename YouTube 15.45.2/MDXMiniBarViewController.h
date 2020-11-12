//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDXSessionObserver-Protocol.h"
#import "MDXVideoProgressObserver-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, MDXAutoplayCoordinator, MDXMiniBarView, MDXSession, NSString, YTImageService, YTPlayerResponse;
@protocol YTResponder;

@interface MDXMiniBarViewController : UIViewController <MDXSessionObserver, MDXVideoProgressObserver, YTResponder>
{
    MDXMiniBarView *_miniBarView;
    MDXSession *_session;
    MDXAutoplayCoordinator *_autoplayCoordinator;
    YTImageService *_imageService;
    YTPlayerResponse *_playerResponse;
    unsigned long long _imageServiceRequestID;
    NSString *_currentVideoID;
    _Bool _isPlayingAd;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didTapSkipAd;
- (void)didTapReplay;
- (void)didTapPause;
- (void)didTapPlay;
- (_Bool)isCurrentVideoLoaded;
- (void)fetchAndSetVideoThumbnailsWithPlayerResponse:(id)arg1;
- (void)videoDidProgressToTime:(double)arg1;
- (void)didReceiveAdWatchNextResponseForMDXSession:(id)arg1;
- (void)didReceiveAdPlayerResponseForMDXSession:(id)arg1;
- (void)didStartAdSessionForMDXSession:(id)arg1;
- (void)MDXSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)MDXSession:(id)arg1 playlistDidChangeToListID:(id)arg2 videoIndex:(unsigned long long)arg3 firstVideoID:(id)arg4;
- (void)setSkipAdEnabled:(_Bool)arg1;
- (void)setWatchNextResponse:(id)arg1;
- (void)setPlayerResponse:(id)arg1;
- (void)showZeroState;
@property(readonly, nonatomic) MDXMiniBarView *miniBarView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 autoplayCoordinator:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
