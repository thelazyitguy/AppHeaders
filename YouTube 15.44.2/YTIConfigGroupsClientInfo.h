//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIConfigGroupsClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appInstallData; // @dynamic appInstallData;
@property(copy, nonatomic) NSString *coldConfigData; // @dynamic coldConfigData;
@property(copy, nonatomic) NSString *coldHashData; // @dynamic coldHashData;
@property(nonatomic) _Bool hasAppInstallData; // @dynamic hasAppInstallData;
@property(nonatomic) _Bool hasColdConfigData; // @dynamic hasColdConfigData;
@property(nonatomic) _Bool hasColdHashData; // @dynamic hasColdHashData;
@property(nonatomic) _Bool hasHotHashData; // @dynamic hasHotHashData;
@property(copy, nonatomic) NSString *hotHashData; // @dynamic hotHashData;

@end

