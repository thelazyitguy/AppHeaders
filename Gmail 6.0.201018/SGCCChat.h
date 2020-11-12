//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, SGCCEmail;

@interface SGCCChat : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *chatURL; // @dynamic chatURL;
@property(retain, nonatomic) SGCCEmail *email; // @dynamic email;
@property(nonatomic) _Bool hasChatURL; // @dynamic hasChatURL;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasNavigationDestination; // @dynamic hasNavigationDestination;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) int navigationDestination; // @dynamic navigationDestination;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;

@end
