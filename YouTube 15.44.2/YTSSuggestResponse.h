//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTSSuggestResponseParameters;

@interface YTSSuggestResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasResponseParameters; // @dynamic hasResponseParameters;
@property(copy, nonatomic) NSString *originalQuery; // @dynamic originalQuery;
@property(retain, nonatomic) YTSSuggestResponseParameters *responseParameters; // @dynamic responseParameters;
@property(retain, nonatomic) NSMutableArray *suggestResultArray; // @dynamic suggestResultArray;
@property(readonly, nonatomic) unsigned long long suggestResultArray_Count; // @dynamic suggestResultArray_Count;

@end

