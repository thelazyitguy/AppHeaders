//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, OrchInfoMessage;

@interface OrchAuthInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchInfoMessage *authErrorMessage; // @dynamic authErrorMessage;
@property(nonatomic) _Bool hasAuthErrorMessage; // @dynamic hasAuthErrorMessage;
@property(nonatomic) _Bool hasRequiredAuthScope; // @dynamic hasRequiredAuthScope;
@property(copy, nonatomic) NSString *requiredAuthScope; // @dynamic requiredAuthScope;

@end

