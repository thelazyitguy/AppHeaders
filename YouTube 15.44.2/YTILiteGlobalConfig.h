//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface YTILiteGlobalConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *androidSupportedFileSharingAppPackagesArray; // @dynamic androidSupportedFileSharingAppPackagesArray;
@property(readonly, nonatomic) unsigned long long androidSupportedFileSharingAppPackagesArray_Count; // @dynamic androidSupportedFileSharingAppPackagesArray_Count;
@property(nonatomic) _Bool hasMaxLocalSearchResultsOffline; // @dynamic hasMaxLocalSearchResultsOffline;
@property(nonatomic) _Bool hasMaxLocalSearchResultsOnline; // @dynamic hasMaxLocalSearchResultsOnline;
@property(nonatomic) int maxLocalSearchResultsOffline; // @dynamic maxLocalSearchResultsOffline;
@property(nonatomic) int maxLocalSearchResultsOnline; // @dynamic maxLocalSearchResultsOnline;

@end

