//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"

@class NSHashTable, NSString, UILabel, UITapGestureRecognizer, YTColorPalette, YTImageView, YTQTMButton, YTViewGroup;

@interface MDXQueueView : UIView <YTPageStyling>
{
    UIView *_headerView;
    YTColorPalette *_colorPalette;
    UIView *_playlistView;
    UILabel *_emptyPlaylistMessage;
    UITapGestureRecognizer *_tapGestureRecognizer;
    YTImageView *_expandArrow;
    YTViewGroup *_collapsedQueueLabelViewGroup;
    _Bool _queueIsEmpty;
    UILabel *_subtitleLabel;
    UILabel *_collapsedQueueTitleHeaderLabel;
    UILabel *_collapsedQueueTitleLabel;
    UILabel *_collapsedQueueSubtitleLabel;
    long long _queueLayout;
    NSHashTable *_queueViewObservers;
    UILabel *_titleLabel;
    YTImageView *_collapseArrow;
    YTQTMButton *_savePlaylistButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTQTMButton *savePlaylistButton; // @synthesize savePlaylistButton=_savePlaylistButton;
@property(readonly, nonatomic) YTImageView *collapseArrow; // @synthesize collapseArrow=_collapseArrow;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) NSHashTable *queueViewObservers; // @synthesize queueViewObservers=_queueViewObservers;
@property(nonatomic) long long queueLayout; // @synthesize queueLayout=_queueLayout;
@property(readonly, nonatomic) UILabel *collapsedQueueSubtitleLabel; // @synthesize collapsedQueueSubtitleLabel=_collapsedQueueSubtitleLabel;
@property(readonly, nonatomic) UILabel *collapsedQueueTitleLabel; // @synthesize collapsedQueueTitleLabel=_collapsedQueueTitleLabel;
@property(readonly, nonatomic) UILabel *collapsedQueueTitleHeaderLabel; // @synthesize collapsedQueueTitleHeaderLabel=_collapsedQueueTitleHeaderLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)didTapHeaderSavePlaylistButton:(id)arg1;
- (void)didTapHeader;
- (void)createExpandedHeaderUI;
- (void)updateHeaderToShowCorrectLayout;
- (void)updateColors;
- (double)queueHeaderHeight;
- (double)playlistViewHeight;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutCollapsedHeaderViews;
- (void)layoutSubviews;
- (id)accessibilityCustomActions;
- (void)dealloc;
- (void)showEmptyPlaylistPlaceholder;
- (void)showPlaylist;
- (void)removeQueueViewObserver:(id)arg1;
- (void)addQueueViewObserver:(id)arg1;
- (id)initWithPlaylistView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
