//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumArray;

@interface SKTClientConfig : GPBMessage
{
}

+ (id)descriptor;
- (id)unsupportedSendTargetTypesSet;
- (_Bool)isMethodTypeSupported:(unsigned long long)arg1;

// Remaining properties
@property(nonatomic) _Bool allowUnmatchedEntry; // @dynamic allowUnmatchedEntry;
@property(nonatomic) int clientId; // @dynamic clientId;
@property(nonatomic) _Bool enableContactNameControls; // @dynamic enableContactNameControls;
@property(nonatomic) _Bool hasAllowUnmatchedEntry; // @dynamic hasAllowUnmatchedEntry;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasEnableContactNameControls; // @dynamic hasEnableContactNameControls;
@property(nonatomic) _Bool hasShowGmailOnlyInAToZList; // @dynamic hasShowGmailOnlyInAToZList;
@property(nonatomic) _Bool hasSocialClientApplication; // @dynamic hasSocialClientApplication;
@property(nonatomic) _Bool showGmailOnlyInAToZList; // @dynamic showGmailOnlyInAToZList;
@property(nonatomic) int socialClientApplication; // @dynamic socialClientApplication;
@property(retain, nonatomic) GPBEnumArray *unsupportedSendtargetTypesArray; // @dynamic unsupportedSendtargetTypesArray;
@property(readonly, nonatomic) unsigned long long unsupportedSendtargetTypesArray_Count; // @dynamic unsupportedSendtargetTypesArray_Count;

@end
