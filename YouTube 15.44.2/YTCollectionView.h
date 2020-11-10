//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <Module_Framework/YTCellActionConfirmationCollectionViewProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewColorOverriding-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTScrollBubbleCollectionViewProtocol-Protocol.h>

@class NSString, QTMActivityIndicator, UICollectionViewCell, UIColor, YTColor, YTScrollBubbleView;
@protocol YTScrollBubbleViewDelegate;

@interface YTCollectionView : UICollectionView <YTPageStyling, YTCellActionConfirmationCollectionViewProtocol, YTCollectionViewColorOverriding, YTScrollBubbleCollectionViewProtocol>
{
    unsigned long long _layoutSubviewsCount;
    QTMActivityIndicator *_activityIndicator;
    YTScrollBubbleView *_scrollBubbleView;
    UICollectionViewCell *_cellInConfirmationMode;
    long long _pageStyle;
    YTColor *_overrideBackgroundColor;
    UIColor *_originalBackgroundColor;
    _Bool _inActionConfirmationMode;
    _Bool _preventContentOffsetAutoAdjust;
    _Bool _shouldScrollInConfirmationMode;
    _Bool _shouldInvalidateCollectionViewLayoutOnWidthChange;
    _Bool _shouldInvalidateCollectionViewLayoutOnHeightChange;
    id <YTScrollBubbleViewDelegate> _scrollBubbleViewDelegate;
    UIColor *_darkBackgroundColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldInvalidateCollectionViewLayoutOnHeightChange; // @synthesize shouldInvalidateCollectionViewLayoutOnHeightChange=_shouldInvalidateCollectionViewLayoutOnHeightChange;
@property(nonatomic) _Bool shouldInvalidateCollectionViewLayoutOnWidthChange; // @synthesize shouldInvalidateCollectionViewLayoutOnWidthChange=_shouldInvalidateCollectionViewLayoutOnWidthChange;
@property(nonatomic) _Bool shouldScrollInConfirmationMode; // @synthesize shouldScrollInConfirmationMode=_shouldScrollInConfirmationMode;
@property(retain, nonatomic) YTColor *overrideBackgroundColor; // @synthesize overrideBackgroundColor=_overrideBackgroundColor;
@property(retain, nonatomic) UIColor *darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property(nonatomic) _Bool preventContentOffsetAutoAdjust; // @synthesize preventContentOffsetAutoAdjust=_preventContentOffsetAutoAdjust;
@property(nonatomic) __weak id <YTScrollBubbleViewDelegate> scrollBubbleViewDelegate; // @synthesize scrollBubbleViewDelegate=_scrollBubbleViewDelegate;
@property(readonly, nonatomic) _Bool inActionConfirmationMode; // @synthesize inActionConfirmationMode=_inActionConfirmationMode;
- (void)createActivityIndicatorIfNeeded;
- (void)updateScrollBubbleViewSizeAndFrame;
- (double)positionYBetweenFirstAndSecondCell;
- (void)didTapScrollBubbleViewAction;
- (void)viewSizeWillChangeFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)touchesCellInConfirmationModeAtPoint:(struct CGPoint)arg1;
- (void)didFinishAnimationToExitConfirmationModeWithCell:(id)arg1;
- (void)didFinishAnimationToEnterConfirmationModeWithCell:(id)arg1;
- (void)exitActionConfirmationModeWithCell:(id)arg1;
- (void)enterActionConfirmationModeWithCell:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)isLayingOutSubviews;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isScrollBubbleActive;
- (void)hideScrollBubble;
- (void)showScrollBubbleWithRenderer:(id)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

