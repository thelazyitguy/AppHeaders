//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSMutableArray, NSString;

@interface CSHMSmartReplyData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPredictionId; // @dynamic hasPredictionId;
@property(copy, nonatomic) NSString *predictionId; // @dynamic predictionId;
@property(retain, nonatomic) NSMutableArray *recommendationArray; // @dynamic recommendationArray;
@property(readonly, nonatomic) unsigned long long recommendationArray_Count; // @dynamic recommendationArray_Count;

@end
