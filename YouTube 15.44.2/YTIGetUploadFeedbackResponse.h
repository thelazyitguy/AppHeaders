//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSArray, NSMutableArray, YTIResponseContext;

@interface YTIGetUploadFeedbackResponse : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSArray *yt_uploadFeedbackItemRenderers;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) NSMutableArray *continuationContentsArray; // @dynamic continuationContentsArray;
@property(readonly, nonatomic) unsigned long long continuationContentsArray_Count; // @dynamic continuationContentsArray_Count;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

