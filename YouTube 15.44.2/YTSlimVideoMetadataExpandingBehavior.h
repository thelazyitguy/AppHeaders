//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCompanionAdResponderProviderObserver-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSectionCellOrnamentBehavior-Protocol.h"
#import "YTSlimVideoActionBarCellControllerDelegate-Protocol.h"
#import "YTSlimVideoInformationCellControllerDelegate-Protocol.h"
#import "YTSlimVideoScrollableActionBarCellControllerDelegate-Protocol.h"

@class NSMutableSet, NSString, YTArraySectionViewModel, YTISlimVideoMetadataSectionRenderer, YTSectionController, YTSlimVideoActionBarCellController, YTSlimVideoInformationCellController, YTSlimVideoScrollableActionBarCellController;
@protocol YTNGWatchMetadataPanelStateResponderProvider, YTResponder;

@interface YTSlimVideoMetadataExpandingBehavior : NSObject <YTSlimVideoActionBarCellControllerDelegate, YTSlimVideoScrollableActionBarCellControllerDelegate, YTSlimVideoInformationCellControllerDelegate, YTResponder, YTSectionCellOrnamentBehavior, YTCompanionAdResponderProviderObserver>
{
    YTISlimVideoMetadataSectionRenderer *_sectionRenderer;
    YTSectionController *_sectionController;
    YTArraySectionViewModel *_viewModel;
    NSMutableSet *_expandableCells;
    id <YTNGWatchMetadataPanelStateResponderProvider> _ngwMetadataPanelStateProvider;
    YTSlimVideoActionBarCellController *_actionBarCellController;
    YTSlimVideoScrollableActionBarCellController *_scrollableActionBarCellController;
    YTSlimVideoInformationCellController *_informationCellController;
    _Bool _isExpanded;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)videoId;
- (void)didTapDisclosureTarget;
- (void)companionAdDidChange:(id)arg1 interactionLoggingAdsClientData:(id)arg2;
- (void)sectionController:(id)arg1 didUpdateCell:(id)arg2 cellController:(id)arg3;
- (void)sectionController:(id)arg1 didCreateCellController:(id)arg2;
- (void)collapse;
- (void)expand;
- (id)initWithMetadataSectionRenderer:(id)arg1 sectionController:(id)arg2 viewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

