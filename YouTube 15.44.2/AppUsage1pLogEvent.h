//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface AppUsage1pLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *androidPackageName; // @dynamic androidPackageName;
@property(nonatomic) int appType; // @dynamic appType;
@property(nonatomic) _Bool hasAndroidPackageName; // @dynamic hasAndroidPackageName;
@property(nonatomic) _Bool hasAppType; // @dynamic hasAppType;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

