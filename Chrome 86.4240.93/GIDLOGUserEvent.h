//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class GIDLOGASAsmClientInfo, GIDLOGASAsmMyGoogleEvent, GIDLOGASAsmScreenDisplayed, GIDLOGMobileRpc, NSString;

@interface GIDLOGUserEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) GIDLOGASAsmClientInfo *asmClientInfo; // @dynamic asmClientInfo;
@property(retain, nonatomic) GIDLOGASAsmMyGoogleEvent *asmMygoogleEvent; // @dynamic asmMygoogleEvent;
@property(retain, nonatomic) GIDLOGASAsmScreenDisplayed *asmScreenDisplayed; // @dynamic asmScreenDisplayed;
@property(nonatomic) int category; // @dynamic category;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasAsmClientInfo; // @dynamic hasAsmClientInfo;
@property(nonatomic) _Bool hasAsmMygoogleEvent; // @dynamic hasAsmMygoogleEvent;
@property(nonatomic) _Bool hasAsmScreenDisplayed; // @dynamic hasAsmScreenDisplayed;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasMobileRpc; // @dynamic hasMobileRpc;
@property(nonatomic) _Bool hasNonInteraction; // @dynamic hasNonInteraction;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) GIDLOGMobileRpc *mobileRpc; // @dynamic mobileRpc;
@property(nonatomic) _Bool nonInteraction; // @dynamic nonInteraction;
@property(nonatomic) int value; // @dynamic value;

@end
