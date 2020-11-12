//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

#import "PSTCustardRequest-Protocol.h"

@class NSString, SGCCCallButtonParams, SGCCChatButtonParams, SGCCCustardConfig, SGCCEmailButtonParams, SGCCMeetButtonParams, SGCCProfileTargetId, SGCCScheduleButtonParams;

@interface SGCCGetProfileQuickActionButtonsRequest : GPBMessage <PSTCustardRequest>
{
}

+ (id)descriptor;
- (void)pst_setupRequest;
@property(readonly, nonatomic) int rpcIdentifier;

// Remaining properties
@property(retain, nonatomic) SGCCCallButtonParams *callButtonParams; // @dynamic callButtonParams;
@property(retain, nonatomic) SGCCChatButtonParams *chatButtonParams; // @dynamic chatButtonParams;
@property(retain, nonatomic) SGCCCustardConfig *config; // @dynamic config;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SGCCEmailButtonParams *emailButtonParams; // @dynamic emailButtonParams;
@property(nonatomic) _Bool hasCallButtonParams; // @dynamic hasCallButtonParams;
@property(nonatomic) _Bool hasChatButtonParams; // @dynamic hasChatButtonParams;
@property(nonatomic) _Bool hasConfig; // @dynamic hasConfig;
@property(nonatomic) _Bool hasEmailButtonParams; // @dynamic hasEmailButtonParams;
@property(nonatomic) _Bool hasMeetButtonParams; // @dynamic hasMeetButtonParams;
@property(nonatomic) _Bool hasProfileTargetId; // @dynamic hasProfileTargetId;
@property(nonatomic) _Bool hasScheduleButtonParams; // @dynamic hasScheduleButtonParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SGCCMeetButtonParams *meetButtonParams; // @dynamic meetButtonParams;
@property(retain, nonatomic) SGCCProfileTargetId *profileTargetId; // @dynamic profileTargetId;
@property(retain, nonatomic) SGCCScheduleButtonParams *scheduleButtonParams; // @dynamic scheduleButtonParams;
@property(readonly) Class superclass;

@end
