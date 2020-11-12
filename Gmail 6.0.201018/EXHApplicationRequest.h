//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class EXHScope, NSData, NSMutableArray;

@interface EXHApplicationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *applicationProperties; // @dynamic applicationProperties;
@property(nonatomic) _Bool hasApplicationProperties; // @dynamic hasApplicationProperties;
@property(nonatomic) _Bool hasScope; // @dynamic hasScope;
@property(nonatomic) _Bool hasSilenceResponse; // @dynamic hasSilenceResponse;
@property(nonatomic) _Bool hasTokensTag; // @dynamic hasTokensTag;
@property(retain, nonatomic) NSMutableArray *paramPartitionTagArray; // @dynamic paramPartitionTagArray;
@property(readonly, nonatomic) unsigned long long paramPartitionTagArray_Count; // @dynamic paramPartitionTagArray_Count;
@property(retain, nonatomic) EXHScope *scope; // @dynamic scope;
@property(nonatomic) _Bool silenceResponse; // @dynamic silenceResponse;
@property(copy, nonatomic) NSData *tokensTag; // @dynamic tokensTag;

@end
