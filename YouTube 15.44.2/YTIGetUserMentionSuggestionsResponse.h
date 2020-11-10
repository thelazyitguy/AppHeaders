//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIRenderer, YTIResponseContext;

@interface YTIGetUserMentionSuggestionsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSuggestionsDialog; // @dynamic hasSuggestionsDialog;
@property(nonatomic) _Bool hasSuggestionsDialogEntityKey; // @dynamic hasSuggestionsDialogEntityKey;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) NSMutableArray *suggestionsArray; // @dynamic suggestionsArray;
@property(readonly, nonatomic) unsigned long long suggestionsArray_Count; // @dynamic suggestionsArray_Count;
@property(retain, nonatomic) YTIRenderer *suggestionsDialog; // @dynamic suggestionsDialog;
@property(copy, nonatomic) NSString *suggestionsDialogEntityKey; // @dynamic suggestionsDialogEntityKey;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

