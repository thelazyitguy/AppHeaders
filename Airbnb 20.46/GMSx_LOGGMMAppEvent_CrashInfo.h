//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_LOGGMMAppEvent_CrashInfo : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *exceptionClass; // @dynamic exceptionClass;
@property(nonatomic) _Bool hasExceptionClass; // @dynamic hasExceptionClass;
@property(nonatomic) _Bool hasIsFatal; // @dynamic hasIsFatal;
@property(nonatomic) _Bool hasIsForeground; // @dynamic hasIsForeground;
@property(nonatomic) _Bool isFatal; // @dynamic isFatal;
@property(nonatomic) _Bool isForeground; // @dynamic isForeground;

@end
