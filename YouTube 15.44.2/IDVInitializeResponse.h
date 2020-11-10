//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class IDVPage, NSMutableArray, OrchIntegratorCallbackData, OrchResponseContext, OrchSecureDataHeader, OrchUiError;

@interface IDVInitializeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalPageArray; // @dynamic additionalPageArray;
@property(readonly, nonatomic) unsigned long long additionalPageArray_Count; // @dynamic additionalPageArray_Count;
@property(retain, nonatomic) OrchIntegratorCallbackData *callbackData; // @dynamic callbackData;
@property(retain, nonatomic) OrchResponseContext *context; // @dynamic context;
@property(retain, nonatomic) OrchUiError *error; // @dynamic error;
@property(nonatomic) int flowInstruction; // @dynamic flowInstruction;
@property(nonatomic) _Bool hasCallbackData; // @dynamic hasCallbackData;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasFlowInstruction; // @dynamic hasFlowInstruction;
@property(nonatomic) _Bool hasInitialPage; // @dynamic hasInitialPage;
@property(nonatomic) _Bool hasSecureHeader; // @dynamic hasSecureHeader;
@property(retain, nonatomic) IDVPage *initialPage; // @dynamic initialPage;
@property(retain, nonatomic) OrchSecureDataHeader *secureHeader; // @dynamic secureHeader;

@end

