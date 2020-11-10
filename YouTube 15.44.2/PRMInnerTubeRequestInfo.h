//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PRMInnerTubeRequestInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPageVisualElementAtResponseTime; // @dynamic hasPageVisualElementAtResponseTime;
@property(nonatomic) _Bool hasParsingTimeMs; // @dynamic hasParsingTimeMs;
@property(nonatomic) _Bool hasResponseProtoSizeCompressedBytes; // @dynamic hasResponseProtoSizeCompressedBytes;
@property(nonatomic) _Bool hasResponseReceivedTimeMs; // @dynamic hasResponseReceivedTimeMs;
@property(nonatomic) _Bool hasRpcStatusCode; // @dynamic hasRpcStatusCode;
@property(nonatomic) _Bool hasRpcTypeURL; // @dynamic hasRpcTypeURL;
@property(nonatomic) _Bool hasSamplingSource; // @dynamic hasSamplingSource;
@property(copy, nonatomic) NSString *pageVisualElementAtResponseTime; // @dynamic pageVisualElementAtResponseTime;
@property(nonatomic) long long parsingTimeMs; // @dynamic parsingTimeMs;
@property(nonatomic) long long responseProtoSizeCompressedBytes; // @dynamic responseProtoSizeCompressedBytes;
@property(nonatomic) long long responseReceivedTimeMs; // @dynamic responseReceivedTimeMs;
@property(nonatomic) int rpcStatusCode; // @dynamic rpcStatusCode;
@property(copy, nonatomic) NSString *rpcTypeURL; // @dynamic rpcTypeURL;
@property(nonatomic) int samplingSource; // @dynamic samplingSource;
@property(retain, nonatomic) NSMutableArray *serviceAnnotationArray; // @dynamic serviceAnnotationArray;
@property(readonly, nonatomic) unsigned long long serviceAnnotationArray_Count; // @dynamic serviceAnnotationArray_Count;

@end

