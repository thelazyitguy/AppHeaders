//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageLiteOrBuilder-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleProtobufByteString, IOSByteArray, JavaIoOutputStream;
@protocol ComGoogleProtobufMessageLite_Builder;

@protocol ComGoogleProtobufMessageLite <ComGoogleProtobufMessageLiteOrBuilder, JavaObject>
- (void)writeDelimitedToWithJavaIoOutputStream:(JavaIoOutputStream *)arg1;
- (void)writeToWithJavaIoOutputStream:(JavaIoOutputStream *)arg1;
- (IOSByteArray *)toByteArray;
- (ComGoogleProtobufByteString *)toByteString;
- (int)getSerializedSize;
- (id <ComGoogleProtobufMessageLite_Builder>)newBuilderForType;
- (id <ComGoogleProtobufMessageLite_Builder>)toBuilder;
@end
