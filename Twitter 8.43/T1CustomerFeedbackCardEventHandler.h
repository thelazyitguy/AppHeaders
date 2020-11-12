//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1CardViewBaseEventHandler.h>

#import <T1Twitter/T1CardViewEventHandler-Protocol.h>

@class NSString, T1CustomerFeedbackCardPresenter;

@interface T1CustomerFeedbackCardEventHandler : T1CardViewBaseEventHandler <T1CardViewEventHandler>
{
    T1CustomerFeedbackCardPresenter *_presenter;
}

+ (id)_logParametersForFeedbackID:(id)arg1 feedbackState:(unsigned long long)arg2 feedbackType:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) T1CustomerFeedbackCardPresenter *presenter; // @synthesize presenter=_presenter;
- (void)_handleURLTappedEvent:(id)arg1 context:(id)arg2;
- (void)_handleTweetEvent:(id)arg1 context:(id)arg2;
- (void)_handleAddCommentEvent:(id)arg1 context:(id)arg2;
- (void)_handleImpressionEvent:(id)arg1 context:(id)arg2;
- (void)_handleDismissEvent:(id)arg1 context:(id)arg2;
- (void)_handleScoreSubmittedEvent:(id)arg1 context:(id)arg2;
- (id)handleViewEvent:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
