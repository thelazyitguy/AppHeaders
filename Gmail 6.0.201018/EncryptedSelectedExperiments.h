//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSData;

@interface EncryptedSelectedExperiments : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int blobType; // @dynamic blobType;
@property(nonatomic) _Bool hasBlobType; // @dynamic hasBlobType;
@property(nonatomic) _Bool hasSelectedExperiments; // @dynamic hasSelectedExperiments;
@property(copy, nonatomic) NSData *selectedExperiments; // @dynamic selectedExperiments;

@end
