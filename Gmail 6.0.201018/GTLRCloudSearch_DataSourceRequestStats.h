//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCloudSearch_Date, NSArray, NSNumber;

@interface GTLRCloudSearch_DataSourceRequestStats : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *countsByResponseCode; // @dynamic countsByResponseCode;
@property(retain, nonatomic) GTLRCloudSearch_Date *date; // @dynamic date;
@property(retain, nonatomic) NSArray *itemCountByError; // @dynamic itemCountByError;
@property(retain, nonatomic) NSNumber *receivedItemsCount; // @dynamic receivedItemsCount;
@property(retain, nonatomic) NSNumber *totalRequestsCount; // @dynamic totalRequestsCount;

@end

