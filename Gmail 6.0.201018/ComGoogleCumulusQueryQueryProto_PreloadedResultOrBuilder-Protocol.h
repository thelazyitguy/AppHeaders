//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCumulusCommandCommandProto_StateResponse, ComGoogleCumulusQueryQueryProto_Query, ComGoogleCumulusQueryQueryProto_Result;
@protocol JavaUtilList;

@protocol ComGoogleCumulusQueryQueryProto_PreloadedResultOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getExpiryTimeMillis;
- (_Bool)hasExpiryTimeMillis;
- (ComGoogleCumulusCommandCommandProto_StateResponse *)getStateResponseWithInt:(int)arg1;
- (id <JavaUtilList>)getStateResponseList;
- (int)getStateResponseCount;
- (ComGoogleCumulusQueryQueryProto_Result *)getPreloadedResult;
- (_Bool)hasPreloadedResult;
- (ComGoogleCumulusQueryQueryProto_Query *)getPreloadedQuery;
- (_Bool)hasPreloadedQuery;
@end
