//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, YTILayoutData;

@interface YTIAdLayoutLoggingData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLayoutData; // @dynamic hasLayoutData;
@property(nonatomic) _Bool hasSerializedAdServingDataEntry; // @dynamic hasSerializedAdServingDataEntry;
@property(retain, nonatomic) YTILayoutData *layoutData; // @dynamic layoutData;
@property(copy, nonatomic) NSData *serializedAdServingDataEntry; // @dynamic serializedAdServingDataEntry;

@end

