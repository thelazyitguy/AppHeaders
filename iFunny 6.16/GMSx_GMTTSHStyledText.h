//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class NSMutableArray, NSString;

@interface GMSx_GMTTSHStyledText : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRawText; // @dynamic hasRawText;
@property(copy, nonatomic) NSString *rawText; // @dynamic rawText;
@property(retain, nonatomic) NSMutableArray *styledSpanArray; // @dynamic styledSpanArray;
@property(readonly, nonatomic) unsigned long long styledSpanArray_Count; // @dynamic styledSpanArray_Count;

@end

