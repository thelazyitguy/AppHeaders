//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, NSNumber, NSString;

@interface GTLRIDrive_Notification_StorageData : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRDateTime *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSNumber *expiringQuotaBytes; // @dynamic expiringQuotaBytes;
@property(retain, nonatomic) NSNumber *quotaBytesTotal; // @dynamic quotaBytesTotal;
@property(retain, nonatomic) NSNumber *quotaBytesUsed; // @dynamic quotaBytesUsed;
@property(copy, nonatomic) NSString *storageAlertType; // @dynamic storageAlertType;
@property(retain, nonatomic) NSNumber *totalQuotaBytesAfterExpiration; // @dynamic totalQuotaBytesAfterExpiration;
@end

