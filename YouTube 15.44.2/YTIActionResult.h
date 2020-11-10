//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIActionResultSupportedRenderers, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString;

@interface YTIActionResult : GPBMessage
{
}

+ (id)descriptor;
+ (id)actionResultFromError:(id)arg1;

// Remaining properties
@property(nonatomic) long long actionPerformedMs; // @dynamic actionPerformedMs;
@property(nonatomic) int feedback; // @dynamic feedback;
@property(retain, nonatomic) YTIFormattedString *feedbackText; // @dynamic feedbackText;
@property(nonatomic) _Bool hasActionPerformedMs; // @dynamic hasActionPerformedMs;
@property(nonatomic) _Bool hasFeedback; // @dynamic hasFeedback;
@property(nonatomic) _Bool hasFeedbackText; // @dynamic hasFeedbackText;
@property(nonatomic) _Bool hasOnResponseReceivedEndpoint; // @dynamic hasOnResponseReceivedEndpoint;
@property(nonatomic) _Bool hasRemoveZeroState; // @dynamic hasRemoveZeroState;
@property(nonatomic) _Bool hasShowCivilityReminderDialog; // @dynamic hasShowCivilityReminderDialog;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasUndoServiceEndpoint; // @dynamic hasUndoServiceEndpoint;
@property(nonatomic) _Bool hasUndoText; // @dynamic hasUndoText;
@property(nonatomic) _Bool hasUpdate; // @dynamic hasUpdate;
@property(nonatomic) _Bool hasUpdatedPollStatus; // @dynamic hasUpdatedPollStatus;
@property(nonatomic) _Bool hasUseResponseActionsToAddNewPost; // @dynamic hasUseResponseActionsToAddNewPost;
@property(nonatomic) _Bool hasViewButton; // @dynamic hasViewButton;
@property(retain, nonatomic) YTICommand *onResponseReceivedEndpoint; // @dynamic onResponseReceivedEndpoint;
@property(nonatomic) _Bool removeZeroState; // @dynamic removeZeroState;
@property(nonatomic) _Bool showCivilityReminderDialog; // @dynamic showCivilityReminderDialog;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) YTICommand *undoServiceEndpoint; // @dynamic undoServiceEndpoint;
@property(retain, nonatomic) YTIFormattedString *undoText; // @dynamic undoText;
@property(retain, nonatomic) YTIActionResultSupportedRenderers *update; // @dynamic update;
@property(nonatomic) int updatedPollStatus; // @dynamic updatedPollStatus;
@property(nonatomic) _Bool useResponseActionsToAddNewPost; // @dynamic useResponseActionsToAddNewPost;
@property(retain, nonatomic) YTIButtonSupportedRenderers *viewButton; // @dynamic viewButton;

@end

