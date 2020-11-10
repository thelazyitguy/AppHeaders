//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2IntegratorClientCallbackData, ORCH2IntegratorServerCallbackData;

@interface ORCH2FinishAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIntegratorClientCallbackData; // @dynamic hasIntegratorClientCallbackData;
@property(nonatomic) _Bool hasIntegratorServerCallbackData; // @dynamic hasIntegratorServerCallbackData;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(retain, nonatomic) ORCH2IntegratorClientCallbackData *integratorClientCallbackData; // @dynamic integratorClientCallbackData;
@property(retain, nonatomic) ORCH2IntegratorServerCallbackData *integratorServerCallbackData; // @dynamic integratorServerCallbackData;
@property(nonatomic) int resultCode; // @dynamic resultCode;

@end

