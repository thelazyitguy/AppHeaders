//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GDCSource, NSMutableArray;

@interface GDCDataSourceRestriction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *filterOptionArray; // @dynamic filterOptionArray;
@property(readonly, nonatomic) unsigned long long filterOptionArray_Count; // @dynamic filterOptionArray_Count;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(retain, nonatomic) GDCSource *source; // @dynamic source;

@end
