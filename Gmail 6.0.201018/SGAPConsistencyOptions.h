//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class SGAPConsistencyLevelOptions;

@interface SGAPConsistencyOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLevel; // @dynamic hasLevel;
@property(nonatomic) _Bool hasLevelOptions; // @dynamic hasLevelOptions;
@property(nonatomic) int level; // @dynamic level;
@property(retain, nonatomic) SGAPConsistencyLevelOptions *levelOptions; // @dynamic levelOptions;

@end
