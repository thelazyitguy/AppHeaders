//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class EPTFlagValue_ProtoValue, NSString;

@interface EPTFlagValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool boolVal; // @dynamic boolVal;
@property(nonatomic) double doubleVal; // @dynamic doubleVal;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasStaticConfigPackage; // @dynamic hasStaticConfigPackage;
@property(nonatomic) long long intVal; // @dynamic intVal;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) EPTFlagValue_ProtoValue *protoVal; // @dynamic protoVal;
@property(copy, nonatomic) NSString *staticConfigPackage; // @dynamic staticConfigPackage;
@property(copy, nonatomic) NSString *stringVal; // @dynamic stringVal;
@property(readonly, nonatomic) int valueOneOfCase; // @dynamic valueOneOfCase;

@end

