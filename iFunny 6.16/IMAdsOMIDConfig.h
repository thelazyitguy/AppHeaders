//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMJSONModel.h>

@class NSNumber, NSString;

@interface IMAdsOMIDConfig : IMJSONModel
{
    NSNumber *_omidEnabled;
    NSNumber *_expiry;
    NSNumber *_maxRetries;
    NSNumber *_retryInterval;
    NSString *_url;
    NSString *_partnerKey;
    NSNumber *_webViewRetainTime;
}

@property(retain, nonatomic) NSNumber *webViewRetainTime; // @synthesize webViewRetainTime=_webViewRetainTime;
@property(retain, nonatomic) NSString *partnerKey; // @synthesize partnerKey=_partnerKey;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *retryInterval; // @synthesize retryInterval=_retryInterval;
@property(retain, nonatomic) NSNumber *maxRetries; // @synthesize maxRetries=_maxRetries;
@property(retain, nonatomic) NSNumber *expiry; // @synthesize expiry=_expiry;
@property(retain, nonatomic) NSNumber *omidEnabled; // @synthesize omidEnabled=_omidEnabled;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end
