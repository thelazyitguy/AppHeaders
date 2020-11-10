//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "YTGridItem-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class MDCInkTouchController, NSString, UILongPressGestureRecognizer, YTQTMButton, YTSlideForActionsView, YTTouchFeedbackController;
@protocol YTCellLinkDelegate, YTSemanticColorDelegate;

@interface YTGridBaseView : UIView <MDCInkTouchControllerDelegate, YTPageStyling, YTGridItem>
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    MDCInkTouchController *_inkTouchController;
    YTTouchFeedbackController *_touchFeedbackController;
    id <YTCellLinkDelegate> _cellLinkDelegate;
    YTSlideForActionsView *_slideForActionsView;
    UIView *_contentView;
    id <YTSemanticColorDelegate> _semanticColorDelegate;
    YTQTMButton *_actionButton;
}

+ (double)preferredHeightForWidth:(double)arg1 entry:(id)arg2;
+ (_Bool)shouldUsePaddedLayoutForEntry:(id)arg1;
+ (_Bool)isExpandedLayoutWithWidth:(double)arg1;
+ (double)thumbnailWidthForExpandedLayoutWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <YTSemanticColorDelegate> semanticColorDelegate; // @synthesize semanticColorDelegate=_semanticColorDelegate;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) YTSlideForActionsView *slideForActionsView; // @synthesize slideForActionsView=_slideForActionsView;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
- (void)exitActionConfirmationMode;
- (void)prepareForReuse;
- (_Bool)shouldUsePaddedLayout;
- (struct CGRect)dismissableCellThumbnailFrame;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic) double actionButtonPaddingX;
@property(retain, nonatomic) id entry;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)inkView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 slideForActionsEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

