//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GBTConversationMessage, JAddOnsTriggerEvent_EmailDraftContext;
@protocol JBTAddOn;

@protocol GBTAddonsCardViewControllerDataSource
- (JAddOnsTriggerEvent_EmailDraftContext *)emailDraftContextForAddOn;
- (id <JBTAddOn>)addOnForFormSubmission;
- (GBTConversationMessage *)conversationMessageForAddOn;
@end
