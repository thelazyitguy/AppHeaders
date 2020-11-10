//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PTVContextualMenu, UIImpactFeedbackGenerator, UIStackView;

@interface PTVContextualMenuView : UIView
{
    _Bool _isBeingDismissed;
    PTVContextualMenu *_menu;
    UIView *_contentView;
    UIStackView *_stackView;
    NSLayoutConstraint *_topConstraint;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

+ (id)showMenu:(id)arg1 inSuperview:(id)arg2 belowView:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) PTVContextualMenu *menu; // @synthesize menu=_menu;
- (void)dismiss;
- (void)tapOnButton:(id)arg1;
- (void)showInSuperview:(id)arg1 belowView:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithMenu:(id)arg1;

@end

