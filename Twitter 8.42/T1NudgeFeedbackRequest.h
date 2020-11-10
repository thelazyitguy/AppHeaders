//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1Nudge-Protocol.h>
#import <T1Twitter/TFNMenuSheetViewControllerDelegate-Protocol.h>

@class NSString, TFNMenuSheetViewController, TFNTwitterAccount, TFNTwitterComposition, TFNTwitterStatus;
@protocol T1NudgeDelegate;

@interface T1NudgeFeedbackRequest : NSObject <TFNMenuSheetViewControllerDelegate, T1Nudge>
{
    _Bool _hasSelectedMenuItem;
    _Bool _isObservingBackgroundNotification;
    id <T1NudgeDelegate> _delegate;
    long long _compositionStatus;
    TFNTwitterAccount *_account;
    TFNTwitterComposition *_composition;
    TFNTwitterStatus *_status;
    TFNMenuSheetViewController *_nudgeMenuSheetViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isObservingBackgroundNotification; // @synthesize isObservingBackgroundNotification=_isObservingBackgroundNotification;
@property(readonly, nonatomic) _Bool hasSelectedMenuItem; // @synthesize hasSelectedMenuItem=_hasSelectedMenuItem;
@property(nonatomic) __weak TFNMenuSheetViewController *nudgeMenuSheetViewController; // @synthesize nudgeMenuSheetViewController=_nudgeMenuSheetViewController;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) long long compositionStatus; // @synthesize compositionStatus=_compositionStatus;
@property(nonatomic) __weak id <T1NudgeDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_t1_giveFeedbackButtonString;
- (id)_t1_activeTextItemWithText:(id)arg1 font:(id)arg2 fontColor:(id)arg3;
- (id)_t1_subtitleTextItem;
- (id)_t1_titleTextItem;
- (id)_t1_compositionStatusTextItem;
- (id)_t1_compositionStatusIcon;
- (void)_t1_nudgeMenuSheetViewControllerDidDismiss;
- (void)_t1_presentFeedbackSurveyFromViewController:(id)arg1;
- (void)_t1_nudgeControllerDidEnterBackground:(id)arg1;
- (void)_t1_recordDismissFeedbackRequestFromGesture;
- (void)_t1_recordCancelFeedbackRequestFromActionItem;
- (void)_t1_recordNudgeResult:(unsigned long long)arg1;
- (void)_t1_recordNudgeAction:(unsigned long long)arg1;
- (void)menuSheetViewController:(id)arg1 willDismissFromGesture:(_Bool)arg2;
- (id)_t1_feedbackRequestMenuSheetViewControllerForPresentingViewController:(id)arg1;
- (void)dismissNudgeAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNudgeFromViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long nudgeType;
- (id)initWithAccount:(id)arg1 composition:(id)arg2 status:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

