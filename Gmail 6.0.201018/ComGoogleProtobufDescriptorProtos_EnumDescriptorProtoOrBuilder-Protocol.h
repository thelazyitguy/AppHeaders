//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtobufDescriptorProtos_EnumDescriptorProto_EnumReservedRange, ComGoogleProtobufDescriptorProtos_EnumOptions, ComGoogleProtobufDescriptorProtos_EnumValueDescriptorProto, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol ComGoogleProtobufDescriptorProtos_EnumDescriptorProtoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getReservedNameWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getReservedNameList;
- (int)getReservedNameCount;
- (ComGoogleProtobufDescriptorProtos_EnumDescriptorProto_EnumReservedRange *)getReservedRangeWithInt:(int)arg1;
- (id <JavaUtilList>)getReservedRangeList;
- (int)getReservedRangeCount;
- (ComGoogleProtobufDescriptorProtos_EnumOptions *)getOptions;
- (_Bool)hasOptions;
- (ComGoogleProtobufDescriptorProtos_EnumValueDescriptorProto *)getValueWithInt:(int)arg1;
- (id <JavaUtilList>)getValueList;
- (int)getValueCount;
- (NSString *)getName;
- (_Bool)hasName;
@end
