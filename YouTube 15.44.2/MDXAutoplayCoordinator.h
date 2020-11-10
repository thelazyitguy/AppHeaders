//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXAutoplayViewDelegate-Protocol.h"
#import "MDXSessionObserver-Protocol.h"

@class GIMMe, MDXSession, NSHashTable, NSMutableArray, NSString, YTIPlaylistPanelVideoRenderer;
@protocol MDXAutoplayCoordinatorDelegate, YTPlayerService;

@interface MDXAutoplayCoordinator : NSObject <MDXSessionObserver, MDXAutoplayViewDelegate>
{
    MDXSession *_session;
    id <YTPlayerService> _playerService;
    NSHashTable *_views;
    long long _mode;
    _Bool _modeSwitchEnabled;
    YTIPlaylistPanelVideoRenderer *_upNextRenderer;
    long long _state;
    unsigned long long _playerRequestID;
    NSMutableArray *_thumbnailControllers;
    GIMMe *_gimme;
    id <MDXAutoplayCoordinatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MDXAutoplayCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)reenableSwitchAllViews;
- (void)resetUpNextRenderer;
- (void)updateUpNextRenderer:(id)arg1;
- (void)updateViewAutoplayState:(id)arg1;
- (void)updateViewThumbnail:(id)arg1;
- (void)updateViewAutoplayModeSwitchEnabled:(id)arg1;
- (void)updateViewAutoplayMode:(id)arg1;
- (void)updateAutoplayStateForAllViews;
- (void)updateThumbnailForAllViews;
- (void)updateAutoplayModeSwitchForAllViews;
- (void)updateAutoplayModeForAllViews;
- (void)updateAllViews;
- (void)reset;
- (void)didTapDismissAutoplay;
- (void)didSelectAutoplayVideo;
- (void)didSwitchAutoplayEnabledForTV:(_Bool)arg1;
- (void)MDXSession:(id)arg1 autoplayStateDidChange:(long long)arg2;
- (void)MDXSession:(id)arg1 autoplayUpNextWithVideoID:(id)arg2;
- (void)MDXSession:(id)arg1 autoplayModeDidChange:(long long)arg2;
- (void)registerAutoplayView:(id)arg1;
- (id)initWithMDXSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

