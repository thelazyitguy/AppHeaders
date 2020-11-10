//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTIAnalyticsCatalystTextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentArray; // @dynamic contentArray;
@property(readonly, nonatomic) unsigned long long contentArray_Count; // @dynamic contentArray_Count;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHeadlineId; // @dynamic hasHeadlineId;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(copy, nonatomic) NSString *headlineId; // @dynamic headlineId;
@property(retain, nonatomic) NSMutableArray *paragraphsArray; // @dynamic paragraphsArray;
@property(readonly, nonatomic) unsigned long long paragraphsArray_Count; // @dynamic paragraphsArray_Count;
@property(retain, nonatomic) NSMutableArray *paragraphsWithBulletsArray; // @dynamic paragraphsWithBulletsArray;
@property(readonly, nonatomic) unsigned long long paragraphsWithBulletsArray_Count; // @dynamic paragraphsWithBulletsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

