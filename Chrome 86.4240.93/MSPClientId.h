//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, NSString;

@interface MSPClientId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *ancillaryClientIdsArray; // @dynamic ancillaryClientIdsArray;
@property(readonly, nonatomic) unsigned long long ancillaryClientIdsArray_Count; // @dynamic ancillaryClientIdsArray_Count;
@property(nonatomic) long long changelist; // @dynamic changelist;
@property(nonatomic) int clientType; // @dynamic clientType;
@property(nonatomic) _Bool hasChangelist; // @dynamic hasChangelist;
@property(nonatomic) _Bool hasClientType; // @dynamic hasClientType;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end
