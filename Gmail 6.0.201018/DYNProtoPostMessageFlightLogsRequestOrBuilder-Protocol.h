//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoClientFlightLog, DYNProtoRequestHeader, NSString;
@protocol JavaUtilList;

@protocol DYNProtoPostMessageFlightLogsRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoClientFlightLog *)getClientFlightLogsWithInt:(int)arg1;
- (id <JavaUtilList>)getClientFlightLogsList;
- (int)getClientFlightLogsCount;
- (NSString *)getSourceMachine;
- (_Bool)hasSourceMachine;
- (DYNProtoRequestHeader *)getRequestHeader;
- (_Bool)hasRequestHeader;
@end
