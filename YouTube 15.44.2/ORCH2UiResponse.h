//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2FlowInstruction, ORCH2ResponseContext, ORCH2SecureDataHeader;

@interface ORCH2UiResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ORCH2ResponseContext *context; // @dynamic context;
@property(retain, nonatomic) ORCH2FlowInstruction *flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(nonatomic) _Bool hasSecureHeader; // @dynamic hasSecureHeader;
@property(retain, nonatomic) ORCH2SecureDataHeader *secureHeader; // @dynamic secureHeader;

@end

