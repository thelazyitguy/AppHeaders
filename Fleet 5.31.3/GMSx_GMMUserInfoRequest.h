//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTLoggingParams;

@interface GMSx_GMMUserInfoRequest : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIncludeLocationHistorySettings; // @dynamic hasIncludeLocationHistorySettings;
@property(nonatomic) _Bool hasIncludeWebAndAppActivityStatus; // @dynamic hasIncludeWebAndAppActivityStatus;
@property(nonatomic) _Bool hasLoggingParams; // @dynamic hasLoggingParams;
@property(nonatomic) _Bool includeLocationHistorySettings; // @dynamic includeLocationHistorySettings;
@property(nonatomic) _Bool includeWebAndAppActivityStatus; // @dynamic includeWebAndAppActivityStatus;
@property(retain, nonatomic) GMSx_GMTTLoggingParams *loggingParams; // @dynamic loggingParams;

@end

