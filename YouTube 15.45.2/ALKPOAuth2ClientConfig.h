//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface ALKPOAuth2ClientConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *clientSecret; // @dynamic clientSecret;
@property(retain, nonatomic) NSMutableArray *defaultScopesArray; // @dynamic defaultScopesArray;
@property(readonly, nonatomic) unsigned long long defaultScopesArray_Count; // @dynamic defaultScopesArray_Count;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasClientSecret; // @dynamic hasClientSecret;
@property(retain, nonatomic) NSMutableArray *redirectUrlsArray; // @dynamic redirectUrlsArray;
@property(readonly, nonatomic) unsigned long long redirectUrlsArray_Count; // @dynamic redirectUrlsArray_Count;

@end

