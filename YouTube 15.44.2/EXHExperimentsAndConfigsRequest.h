//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class EXHClientProperties, NSData, NSMutableArray, NSString;

@interface EXHExperimentsAndConfigsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *applicationRequestArray; // @dynamic applicationRequestArray;
@property(readonly, nonatomic) unsigned long long applicationRequestArray_Count; // @dynamic applicationRequestArray_Count;
@property(retain, nonatomic) EXHClientProperties *clientProperties; // @dynamic clientProperties;
@property(nonatomic) int clientType; // @dynamic clientType;
@property(copy, nonatomic) NSString *fetchConfigPackage; // @dynamic fetchConfigPackage;
@property(nonatomic) int fetchReason; // @dynamic fetchReason;
@property(nonatomic) _Bool hasClientProperties; // @dynamic hasClientProperties;
@property(nonatomic) _Bool hasClientType; // @dynamic hasClientType;
@property(nonatomic) _Bool hasFetchConfigPackage; // @dynamic hasFetchConfigPackage;
@property(nonatomic) _Bool hasFetchReason; // @dynamic hasFetchReason;
@property(nonatomic) _Bool hasRequestConfigTag; // @dynamic hasRequestConfigTag;
@property(copy, nonatomic) NSData *requestConfigTag; // @dynamic requestConfigTag;

@end

