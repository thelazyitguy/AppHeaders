//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class CSHMBatchedMetricsData, CSHMChatConversationRequestData, CSHMChatData, CSHMClickToCallData, CSHMConfigurationsData, CSHMFormContent, CSHMScreenshareIssues, CSHMScreenshareSignals, CSHMVideoCallData, NSMutableArray, NSString;

@interface CSHMRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CSHMBatchedMetricsData *batchedMetricsData; // @dynamic batchedMetricsData;
@property(retain, nonatomic) CSHMChatConversationRequestData *chatConversationRequestData; // @dynamic chatConversationRequestData;
@property(retain, nonatomic) CSHMChatData *chatData; // @dynamic chatData;
@property(retain, nonatomic) CSHMClickToCallData *clickToCallData; // @dynamic clickToCallData;
@property(retain, nonatomic) CSHMConfigurationsData *configurationsData; // @dynamic configurationsData;
@property(copy, nonatomic) NSString *deprecatedProductSpecificData; // @dynamic deprecatedProductSpecificData;
@property(retain, nonatomic) CSHMFormContent *formContent; // @dynamic formContent;
@property(copy, nonatomic) NSString *gcmToken; // @dynamic gcmToken;
@property(copy, nonatomic) NSString *googleAssistantTranscript; // @dynamic googleAssistantTranscript;
@property(nonatomic) int googlehelpVersion; // @dynamic googlehelpVersion;
@property(copy, nonatomic) NSString *googlehelpVersionName; // @dynamic googlehelpVersionName;
@property(nonatomic) _Bool hasBatchedMetricsData; // @dynamic hasBatchedMetricsData;
@property(nonatomic) _Bool hasChatConversationRequestData; // @dynamic hasChatConversationRequestData;
@property(nonatomic) _Bool hasChatData; // @dynamic hasChatData;
@property(nonatomic) _Bool hasClickToCallData; // @dynamic hasClickToCallData;
@property(nonatomic) _Bool hasConfigurationsData; // @dynamic hasConfigurationsData;
@property(nonatomic) _Bool hasDeprecatedProductSpecificData; // @dynamic hasDeprecatedProductSpecificData;
@property(nonatomic) _Bool hasFormContent; // @dynamic hasFormContent;
@property(nonatomic) _Bool hasGcmToken; // @dynamic hasGcmToken;
@property(nonatomic) _Bool hasGoogleAssistantTranscript; // @dynamic hasGoogleAssistantTranscript;
@property(nonatomic) _Bool hasGooglehelpVersion; // @dynamic hasGooglehelpVersion;
@property(nonatomic) _Bool hasGooglehelpVersionName; // @dynamic hasGooglehelpVersionName;
@property(nonatomic) _Bool hasHelpCenterContext; // @dynamic hasHelpCenterContext;
@property(nonatomic) _Bool hasIncludeIssueResolutionResults; // @dynamic hasIncludeIssueResolutionResults;
@property(nonatomic) _Bool hasIncludeTopics; // @dynamic hasIncludeTopics;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasScreenshareInvitationId; // @dynamic hasScreenshareInvitationId;
@property(nonatomic) _Bool hasScreenshareIssues; // @dynamic hasScreenshareIssues;
@property(nonatomic) _Bool hasScreenshareSignals; // @dynamic hasScreenshareSignals;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSignalsRequestId; // @dynamic hasSignalsRequestId;
@property(nonatomic) _Bool hasVideoCallData; // @dynamic hasVideoCallData;
@property(copy, nonatomic) NSString *helpCenterContext; // @dynamic helpCenterContext;
@property(nonatomic) _Bool includeIssueResolutionResults; // @dynamic includeIssueResolutionResults;
@property(nonatomic) _Bool includeTopics; // @dynamic includeTopics;
@property(retain, nonatomic) NSMutableArray *productSpecificDataArray; // @dynamic productSpecificDataArray;
@property(readonly, nonatomic) unsigned long long productSpecificDataArray_Count; // @dynamic productSpecificDataArray_Count;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(copy, nonatomic) NSString *screenshareInvitationId; // @dynamic screenshareInvitationId;
@property(retain, nonatomic) CSHMScreenshareIssues *screenshareIssues; // @dynamic screenshareIssues;
@property(retain, nonatomic) CSHMScreenshareSignals *screenshareSignals; // @dynamic screenshareSignals;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *signalsRequestId; // @dynamic signalsRequestId;
@property(retain, nonatomic) CSHMVideoCallData *videoCallData; // @dynamic videoCallData;

@end

