//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PTVActionSheetButton, UIScrollView;
@protocol PTVActionSheetViewDelegate;

@interface PTVActionSheetView : UIView
{
    UIView *_headerView;
    UIView *_buttonsBackgroundView;
    PTVActionSheetButton *_dismissButton;
    UIScrollView *_actionSheetScrollView;
    UIView *_actionSheetBackgroundView;
    id <PTVActionSheetViewDelegate> _delegate;
    NSArray *_actionButtons;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
- (void)actionButtonPressed:(id)arg1;
- (void)dismissButtonPressed:(id)arg1;
- (id)headerViewWithAttributedTitle:(id)arg1;
- (id)dismissButtonWithAttributedTitle:(id)arg1;
- (id)actionButtonWithAttributedTitle:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)initWithDelegate:(id)arg1 attributedMessage:(id)arg2 attributedDismissTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (void)layoutSubviews;
- (struct CGSize)maxButtonSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
