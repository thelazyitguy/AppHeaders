//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVExtendedButton.h>

@class NSDate, NSTimer, PTVCircularProgressBar, UIActivityIndicatorView, UIImageView;

@interface PTVAddGuestCountdownButton : PTVExtendedButton
{
    PTVAddGuestCountdownButton *_weakSelf;
    UIImageView *_plusImageView;
    UIImageView *_hangUpImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _guestCallerSessionState;
    NSDate *_countdownEndDate;
    PTVCircularProgressBar *_circularProgressBar;
    unsigned long long _countdownStyle;
    CDUnknownBlockType _countdownCompletionCallback;
    NSTimer *_countdownTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(copy, nonatomic) CDUnknownBlockType countdownCompletionCallback; // @synthesize countdownCompletionCallback=_countdownCompletionCallback;
@property(nonatomic) unsigned long long countdownStyle; // @synthesize countdownStyle=_countdownStyle;
- (void)countdownTimerDidFire;
- (void)stopCountdownTimer;
- (void)startCountdownTimer;
- (void)plusImageRotationState;
- (void)alphaState;
- (unsigned long long)guestCallerSessionState;
- (void)setGuestCallerSessionState:(unsigned long long)arg1 countdownEndDate:(id)arg2 isDisabled:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

