//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, OrchRequestContext;

@interface EmbeddedLandingPageInitializeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchRequestContext *context; // @dynamic context;
@property(copy, nonatomic) NSData *encryptedParameters; // @dynamic encryptedParameters;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasEncryptedParameters; // @dynamic hasEncryptedParameters;

@end

