//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PTVBlackShadeBackgroundColorView, PTVExtendedButton, PTVGuestCallerSession, PTVGuestCancelView, PTVGuestView, UIImpactFeedbackGenerator, UITapGestureRecognizer;
@protocol PTVGuestContainerViewDelegate;

@interface PTVGuestContainerView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_videoViewShadowView;
    PTVBlackShadeBackgroundColorView *_videoViewMaskView;
    PTVExtendedButton *_actionButton;
    PTVExtendedButton *_usernameButton;
    PTVGuestCancelView *_guestCancelView;
    struct CGSize _aspectFillSize;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool _isGuestViewBackgroundVisible;
    id <PTVGuestContainerViewDelegate> _delegate;
    PTVGuestView *_guestView;
    NSString *_guestUsername;
    PTVGuestCallerSession *_guestCallerSession;
    long long _participantIndex;
    unsigned long long _actionButtonType;
    UITapGestureRecognizer *_tapGestureRecognizer;
    long long _interfaceOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) unsigned long long actionButtonType; // @synthesize actionButtonType=_actionButtonType;
@property(nonatomic) _Bool isGuestViewBackgroundVisible; // @synthesize isGuestViewBackgroundVisible=_isGuestViewBackgroundVisible;
@property(nonatomic) long long participantIndex; // @synthesize participantIndex=_participantIndex;
@property(retain, nonatomic) PTVGuestCallerSession *guestCallerSession; // @synthesize guestCallerSession=_guestCallerSession;
@property(retain, nonatomic) NSString *guestUsername; // @synthesize guestUsername=_guestUsername;
@property(retain, nonatomic) PTVGuestView *guestView; // @synthesize guestView=_guestView;
@property(nonatomic) __weak id <PTVGuestContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleAction:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)actionButtonVisibilityStateDidChange;
- (void)usernameButtonPressed;
- (void)usernameVisibilityStateDidChanged;
- (_Bool)shouldGuestUsernameButtonBeVisible;
- (void)executeState;
- (void)didUpdateGuestCallerSession:(id)arg1;
- (void)shadowStateDidChange;
- (void)guestBackgroundColorStateDidChange;
- (_Bool)hasGuestView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)createOrRemoveCancelViewIfNeeded;
- (void)createOrRemoveUsernameButtonIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

