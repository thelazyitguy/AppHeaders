//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVBroadcastOverflowScrollContainerView.h>

#import <PeriscopeSDK/UIScrollViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UIStackView, UIView;
@protocol PTVBroadcastOverflowScrollStackContainerViewDelegate;

@interface PTVBroadcastOverflowScrollStackContainerView : PTVBroadcastOverflowScrollContainerView <UIScrollViewDelegate>
{
    NSLayoutConstraint *_emptySpaceContainerHeightConstraint;
    NSLayoutConstraint *_emptySpaceContentCenterYConstraint;
    NSLayoutConstraint *_contentStackViewHeightConstraint;
    UIStackView *_stackView;
    UIView *_emptySpaceContainerView;
    NSLayoutConstraint *_emptySpaceContainerMinimumHeightConstraint;
    UIView *_emptySpaceContentView;
    id <PTVBroadcastOverflowScrollStackContainerViewDelegate> _scrollDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PTVBroadcastOverflowScrollStackContainerViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) UIView *emptySpaceContentView; // @synthesize emptySpaceContentView=_emptySpaceContentView;
@property(readonly, nonatomic) NSLayoutConstraint *emptySpaceContainerMinimumHeightConstraint; // @synthesize emptySpaceContainerMinimumHeightConstraint=_emptySpaceContainerMinimumHeightConstraint;
@property(readonly, nonatomic) UIView *emptySpaceContainerView; // @synthesize emptySpaceContainerView=_emptySpaceContainerView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)didTapEmptySpace;
- (double)emptySpaceCompression;
- (void)updateEmptySpaceContentViewAlpha;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
