//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, Comment, NSString, Post;
@protocol _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface GildingEventLogger : NSObject
{
    _Bool _isLiveStream;
    _Bool _didLogTypeMessageEvent;
    _Bool _didLogViewGildFormEvent;
    Account *_account;
    Post *_post;
    Comment *_comment;
    NSString *_correlationId;
    id <_TtP18AnalyticsFramework15AnalyticsLogger_> _analyticsLogger;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLogViewGildFormEvent; // @synthesize didLogViewGildFormEvent=_didLogViewGildFormEvent;
@property(nonatomic) _Bool didLogTypeMessageEvent; // @synthesize didLogTypeMessageEvent=_didLogTypeMessageEvent;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(readonly, nonatomic) _Bool isLiveStream; // @synthesize isLiveStream=_isLiveStream;
@property(readonly, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(readonly, nonatomic) Account *account; // @synthesize account=_account;
- (id)gildingContentString;
- (id)offerPercentage:(id)arg1;
- (id)goldPurchaseForAward:(id)arg1 product:(id)arg2;
- (id)eventWithSource:(id)arg1 action:(id)arg2 noun:(id)arg3;
- (void)logViewPurchaseSuccessEventWithAward:(id)arg1 product:(id)arg2 transactionId:(id)arg3;
- (void)logViewPurchaseProcessingEventWithAward:(id)arg1 product:(id)arg2;
- (void)logConfirmPurchaseEventWithAward:(id)arg1 product:(id)arg2;
- (void)logClosePurchaseConfirmationEventWithAward:(id)arg1 product:(id)arg2;
- (void)logViewPurchaseConfirmationEventWithAward:(id)arg1 product:(id)arg2;
- (void)logViewKarmaSuccessEventWith:(id)arg1 andAccount:(id)arg2 forTarget:(id)arg3;
- (void)logViewAwardSuccessEventWithAward:(id)arg1 isAnonymous:(_Bool)arg2;
- (void)logCloseGiveAwardModalEvent;
- (void)logClickNextButtonEvent;
- (void)logClickAwardButtonEventWithAward:(id)arg1;
- (void)logClickGetPremiumButtonEventWithAward:(id)arg1;
- (void)logSaveOptionsEvent;
- (void)logTypeMessageEvent;
- (void)logClickGetMoreCoinsEvent;
- (void)logClickEditOptionsEvent;
- (void)logUnselectAnonymousOptionEvent;
- (void)logSelectAnonymousOptionEvent;
- (void)logSelectAwardEventWithAward:(id)arg1 rowIndex:(long long)arg2 columnIndex:(long long)arg3 miniPillTag:(id)arg4 miniPillText:(id)arg5;
- (void)logSelectAwardEventWithAward:(id)arg1;
- (id)goldPurchaseForAward:(id)arg1;
- (void)logViewAwardSelectionWithSelectedAward:(id)arg1 availableAwards:(id)arg2 isDefaultAnonymous:(_Bool)arg3;
- (id)initWithAccount:(id)arg1 post:(id)arg2 comment:(id)arg3 isLiveStream:(_Bool)arg4 correlationId:(id)arg5 analyticsLogger:(id)arg6;

@end

