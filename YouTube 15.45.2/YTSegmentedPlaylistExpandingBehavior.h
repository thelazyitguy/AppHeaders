//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTDefaultSectionSelectionBehavior.h>

#import "YTResponder-Protocol.h"
#import "YTSectionCellOrnamentBehavior-Protocol.h"

@class NSString, YTArraySectionViewModel, YTSectionController, YTSegmentedPlaylistModel;
@protocol YTResponder;

@interface YTSegmentedPlaylistExpandingBehavior : YTDefaultSectionSelectionBehavior <YTResponder, YTSectionCellOrnamentBehavior>
{
    id <YTResponder> _parentResponder;
    YTSegmentedPlaylistModel *_segmentedPlaylistModel;
    YTArraySectionViewModel *_viewModel;
    YTSectionController *_sectionController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YTSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) YTArraySectionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) YTSegmentedPlaylistModel *segmentedPlaylistModel; // @synthesize segmentedPlaylistModel=_segmentedPlaylistModel;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)setExpanded:(_Bool)arg1 atSegmentIndex:(unsigned long long)arg2;
- (id)visibleEntries;
- (void)didSelectItemAtIndex:(long long)arg1 cellController:(id)arg2 fromView:(id)arg3;
- (void)sectionController:(id)arg1 didUpdateCell:(id)arg2 cellController:(id)arg3;
- (void)sectionController:(id)arg1 didCreateCellController:(id)arg2;
- (id)initWithItemSectionRenderer:(id)arg1 sectionController:(id)arg2 viewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
