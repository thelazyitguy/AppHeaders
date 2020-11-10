//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeSectionController.h>

#import "YTOfflineVideoControllerObserver-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTIPlaylistPanelRenderer, YTOfflineVideoController, YTPlaylistPanelControlsView;
@protocol YTPlaylistPanelControlsViewDelegate, YTResponder;

@interface YTPlaylistPanelSectionController : YTInnerTubeSectionController <YTResponder, YTOfflineVideoControllerObserver>
{
    YTPlaylistPanelControlsView *_header;
    YTOfflineVideoController *_offlineVideoController;
    YTIPlaylistPanelRenderer *_playlistPanelRenderer;
    _Bool _useRendererSaveIcons;
    _Bool _videoCountHidden;
    _Bool _shuffleEnabled;
    _Bool _loopEnabled;
    _Bool _actionEnabled;
    _Bool _shuffleButtonSelected;
    _Bool _loopButtonSelected;
    _Bool _saveButtonEnabled;
    _Bool _shareButtonEnabled;
    _Bool _saveButtonSelected;
    _Bool _infiniteList;
    _Bool _headerHidden;
    NSString *_videoCountText;
    id <YTPlaylistPanelControlsViewDelegate> _controlsDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTPlaylistPanelControlsViewDelegate> controlsDelegate; // @synthesize controlsDelegate=_controlsDelegate;
@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden; // @synthesize headerHidden=_headerHidden;
@property(readonly, nonatomic, getter=isInfiniteList) _Bool infiniteList; // @synthesize infiniteList=_infiniteList;
@property(nonatomic, getter=isSaveSelected) _Bool saveButtonSelected; // @synthesize saveButtonSelected=_saveButtonSelected;
@property(readonly, nonatomic, getter=isShareEnabled) _Bool shareButtonEnabled; // @synthesize shareButtonEnabled=_shareButtonEnabled;
@property(readonly, nonatomic, getter=isSaveEnabled) _Bool saveButtonEnabled; // @synthesize saveButtonEnabled=_saveButtonEnabled;
@property(nonatomic, getter=isLoopSelected) _Bool loopButtonSelected; // @synthesize loopButtonSelected=_loopButtonSelected;
@property(nonatomic, getter=isShuffleSelected) _Bool shuffleButtonSelected; // @synthesize shuffleButtonSelected=_shuffleButtonSelected;
@property(nonatomic, getter=isActionEnabled) _Bool actionEnabled; // @synthesize actionEnabled=_actionEnabled;
@property(readonly, nonatomic, getter=isLoopEnabled) _Bool loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(readonly, nonatomic, getter=isShuffleEnabled) _Bool shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(readonly, nonatomic, getter=isVideoCountHidden) _Bool videoCountHidden; // @synthesize videoCountHidden=_videoCountHidden;
@property(readonly, nonatomic) NSString *videoCountText; // @synthesize videoCountText=_videoCountText;
- (void)updateEntriesWithVideoID:(id)arg1;
- (id)rendererForVideo:(id)arg1;
- (id)videoIDForEntry:(id)arg1;
- (_Bool)isValidVideoEntry:(id)arg1;
- (void)didUpdateMetadataForVideoID:(id)arg1;
- (void)didSaveThumbnailWithVideoID:(id)arg1;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideoWithID:(id)arg3;
- (void)didDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didFailToSaveOfflineVideoWithID:(id)arg1;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidFailWithVideoID:(id)arg1 error:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidCancelWithVideoID:(id)arg1;
- (void)downloadDidStartWithVideoID:(id)arg1;
- (void)didTapStatusView:(id)arg1;
- (double)alphaForIndex:(unsigned long long)arg1;
- (void)updateHeader:(id)arg1;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (Class)classForHeader;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (_Bool)persistCellSelection;
@property(readonly, nonatomic) YTPlaylistPanelControlsView *controlsView;
- (long long)indexOfCellWithVideoId:(id)arg1;
- (void)setVideoCountText:(id)arg1 videoCountHidden:(_Bool)arg2 shuffleEnabled:(_Bool)arg3 shuffleSelected:(_Bool)arg4 loopEnabled:(_Bool)arg5 loopSelected:(_Bool)arg6 saveEnabled:(_Bool)arg7 shareEnabled:(_Bool)arg8 saveSelected:(_Bool)arg9 actionEnabled:(_Bool)arg10 playlistPanelRenderer:(id)arg11 useRendererSaveIcons:(_Bool)arg12;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

