//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface CodeModuleProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long baseAddress; // @dynamic baseAddress;
@property(copy, nonatomic) NSString *codeFile; // @dynamic codeFile;
@property(copy, nonatomic) NSString *codeIdentifier; // @dynamic codeIdentifier;
@property(copy, nonatomic) NSString *debugFile; // @dynamic debugFile;
@property(copy, nonatomic) NSString *debugIdentifier; // @dynamic debugIdentifier;
@property(nonatomic) _Bool hasBaseAddress; // @dynamic hasBaseAddress;
@property(nonatomic) _Bool hasCodeFile; // @dynamic hasCodeFile;
@property(nonatomic) _Bool hasCodeIdentifier; // @dynamic hasCodeIdentifier;
@property(nonatomic) _Bool hasDebugFile; // @dynamic hasDebugFile;
@property(nonatomic) _Bool hasDebugIdentifier; // @dynamic hasDebugIdentifier;
@property(nonatomic) _Bool hasIsUnloaded; // @dynamic hasIsUnloaded;
@property(nonatomic) _Bool hasShrinkDownDelta; // @dynamic hasShrinkDownDelta;
@property(nonatomic) _Bool hasSize; // @dynamic hasSize;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) _Bool isUnloaded; // @dynamic isUnloaded;
@property(nonatomic) long long shrinkDownDelta; // @dynamic shrinkDownDelta;
@property(nonatomic) long long size; // @dynamic size;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

