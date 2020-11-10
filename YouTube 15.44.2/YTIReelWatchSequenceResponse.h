//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIFrameworkUpdateTransport, YTIResponseContext;

@interface YTIReelWatchSequenceResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *continuation; // @dynamic continuation;
@property(retain, nonatomic) NSMutableArray *entriesArray; // @dynamic entriesArray;
@property(readonly, nonatomic) unsigned long long entriesArray_Count; // @dynamic entriesArray_Count;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasPrevContinuation; // @dynamic hasPrevContinuation;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(copy, nonatomic) NSString *prevContinuation; // @dynamic prevContinuation;
@property(retain, nonatomic) NSMutableArray *prevEntriesArray; // @dynamic prevEntriesArray;
@property(readonly, nonatomic) unsigned long long prevEntriesArray_Count; // @dynamic prevEntriesArray_Count;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end

