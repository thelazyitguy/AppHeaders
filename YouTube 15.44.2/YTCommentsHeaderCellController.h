//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import <Module_Framework/YTActionSheetControllerDelegate-Protocol.h>

@class NSString, YTActionSheetController;
@protocol YTDataServices, YTInnerTubeUIGlobals, YTResponder, YTTopController;

@interface YTCommentsHeaderCellController : YTInnerTubeCellController <YTActionSheetControllerDelegate>
{
    id <YTDataServices> _dataServices;
    id <YTInnerTubeUIGlobals> _globals;
    id <YTResponder> _parentResponder;
    id <YTTopController> _createController;
    YTActionSheetController *_sortMenu;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTActionSheetController *sortMenu; // @synthesize sortMenu=_sortMenu;
@property(nonatomic) __weak id <YTTopController> createController; // @synthesize createController=_createController;
- (id)parentResponder;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)didTapSortMenu:(id)arg1;
- (void)didTapCreateCommentBox:(id)arg1;
- (void)actionSheetDidDisappear:(id)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (void)transferStateFromController:(id)arg1;
- (void)setCell:(id)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (_Bool)shouldHighlightItem;
- (void)openReplyView;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

