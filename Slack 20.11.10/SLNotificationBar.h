//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAppearance-Protocol.h"

@class NSDictionary, NSString, NSTimer, SLWindowContainer, UIButton, UIColor, UILabel, UIView;

@interface SLNotificationBar : NSObject <UIAppearance>
{
    _Bool _showing;
    _Bool _dimissing;
    SLWindowContainer *_windowContainer;
    UIView *_statusBarView;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSTimer *_visibilityTimer;
    NSDictionary *_messageTextAttributes;
    NSDictionary *_buttonTextAttributes;
    UIColor *_backgroundColor;
    double _visibleInterval;
    double _transitionInterval;
    CDUnknownBlockType _actionBlock;
    long long _initialOrientation;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _undoButtonTappedBlock;
}

+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;
+ (id)appearance;
+ (id)defaultBar;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType undoButtonTappedBlock; // @synthesize undoButtonTappedBlock=_undoButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property(readonly, nonatomic, getter=isDimissing) _Bool dimissing; // @synthesize dimissing=_dimissing;
@property(readonly, nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) double transitionInterval; // @synthesize transitionInterval=_transitionInterval;
@property(nonatomic) double visibleInterval; // @synthesize visibleInterval=_visibleInterval;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSTimer *visibilityTimer; // @synthesize visibilityTimer=_visibilityTimer;
- (void)dealloc;
- (void)invalidate;
- (void)unregisterOrientationNotifications;
- (void)registerOrientationNotifications;
- (void)dismissNotificationBar:(id)arg1;
- (void)dismiss;
- (void)showWithMessage:(id)arg1 buttonTitle:(id)arg2 duration:(double)arg3 undoButtonTapped:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showWithMessage:(id)arg1 duration:(double)arg2;
- (void)showWithMessage:(id)arg1;
- (void)didTapInteractiveButton:(id)arg1;
- (void)didTapNotificationLabel:(id)arg1;
- (void)didChangeStatusBarOrientation:(id)arg1;
- (void)willChangeStatusBarOrientation:(id)arg1;
- (void)containerViewWillTransitionToSize:(struct CGSize)arg1 coordinator:(id)arg2;
@property(retain, nonatomic) NSDictionary *buttonTextAttributes; // @synthesize buttonTextAttributes=_buttonTextAttributes;
@property(retain, nonatomic) NSDictionary *messageTextAttributes; // @synthesize messageTextAttributes=_messageTextAttributes;
- (void)setActionButtonTitle:(id)arg1;
- (void)setNotificationMessage:(id)arg1;
- (struct CGRect)actionButtonFrame;
- (struct CGRect)notificationLabelFrame;
- (struct CGRect)notificationLabelBottomFrame;
- (struct CGRect)notificationLabelTopFrame;
- (id)buttonText;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(readonly, nonatomic) SLWindowContainer *windowContainer; // @synthesize windowContainer=_windowContainer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
