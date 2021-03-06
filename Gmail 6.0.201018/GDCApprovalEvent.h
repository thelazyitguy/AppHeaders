//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GDCApprovalEvent_CommentEvent, GDCApprovalEvent_CompleteEvent, GDCApprovalEvent_CreateEvent, GDCApprovalEvent_DecisionEvent, GDCApprovalEvent_DueTimeChangeEvent, GDCApprovalEvent_ReviewerChangeEvent, NSString;

@interface GDCApprovalEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GDCApprovalEvent_CommentEvent *commentEvent; // @dynamic commentEvent;
@property(retain, nonatomic) GDCApprovalEvent_CompleteEvent *completeEvent; // @dynamic completeEvent;
@property(retain, nonatomic) GDCApprovalEvent_CreateEvent *createEvent; // @dynamic createEvent;
@property(nonatomic) long long createTimeMillis; // @dynamic createTimeMillis;
@property(copy, nonatomic) NSString *creatorId; // @dynamic creatorId;
@property(retain, nonatomic) GDCApprovalEvent_DecisionEvent *decisionEvent; // @dynamic decisionEvent;
@property(retain, nonatomic) GDCApprovalEvent_DueTimeChangeEvent *dueTimeChangeEvent; // @dynamic dueTimeChangeEvent;
@property(nonatomic) _Bool hasCommentEvent; // @dynamic hasCommentEvent;
@property(nonatomic) _Bool hasCompleteEvent; // @dynamic hasCompleteEvent;
@property(nonatomic) _Bool hasCreateEvent; // @dynamic hasCreateEvent;
@property(nonatomic) _Bool hasCreateTimeMillis; // @dynamic hasCreateTimeMillis;
@property(nonatomic) _Bool hasCreatorId; // @dynamic hasCreatorId;
@property(nonatomic) _Bool hasDecisionEvent; // @dynamic hasDecisionEvent;
@property(nonatomic) _Bool hasDueTimeChangeEvent; // @dynamic hasDueTimeChangeEvent;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasReviewerChangeEvent; // @dynamic hasReviewerChangeEvent;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) GDCApprovalEvent_ReviewerChangeEvent *reviewerChangeEvent; // @dynamic reviewerChangeEvent;

@end

