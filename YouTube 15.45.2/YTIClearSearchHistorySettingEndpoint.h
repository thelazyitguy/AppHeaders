//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIClearSearchHistorySettingEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool boolValue; // @dynamic boolValue;
@property(nonatomic) _Bool hasSettingItemId; // @dynamic hasSettingItemId;
@property(nonatomic) long long intValue; // @dynamic intValue;
@property(copy, nonatomic) NSString *settingItemId; // @dynamic settingItemId;
@property(readonly, nonatomic) int settingValueOneOfCase; // @dynamic settingValueOneOfCase;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

@end

