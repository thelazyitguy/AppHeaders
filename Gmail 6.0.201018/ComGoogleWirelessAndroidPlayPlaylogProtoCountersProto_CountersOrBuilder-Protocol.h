//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtobufByteString, ComGoogleWirelessAndroidPlayPlaylogProtoCountersProto_Counter, NSString;
@protocol JavaUtilList;

@protocol ComGoogleWirelessAndroidPlayPlaylogProtoCountersProto_CountersOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getDimensionsInstanceJson;
- (_Bool)hasDimensionsInstanceJson;
- (NSString *)getDimensionsInstanceJs;
- (_Bool)hasDimensionsInstanceJs;
- (ComGoogleProtobufByteString *)getDimensionsInstance;
- (_Bool)hasDimensionsInstance;
- (ComGoogleWirelessAndroidPlayPlaylogProtoCountersProto_Counter *)getCounterWithInt:(int)arg1;
- (id <JavaUtilList>)getCounterList;
- (int)getCounterCount;
- (long long)getTimestampMillis;
- (_Bool)hasTimestampMillis;
- (long long)getUptimeMillis;
- (_Bool)hasUptimeMillis;
@end
