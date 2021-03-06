//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSMobileAnalyticsBufferedReader, AWSMobileAnalyticsCrypto;

@interface AWSMobileAnalyticsEncryptedBufferedReader : NSObject
{
    AWSMobileAnalyticsCrypto *_crypto;
    AWSMobileAnalyticsBufferedReader *_reader;
}

+ (id)readerWithReader:(id)arg1 secretKey:(id)arg2;
@property(retain, nonatomic) AWSMobileAnalyticsBufferedReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) AWSMobileAnalyticsCrypto *crypto; // @synthesize crypto=_crypto;
- (void).cxx_destruct;
- (void)close;
- (_Bool)readLine:(id *)arg1 withError:(id *)arg2;
- (id)initWithWithReader:(id)arg1 withCrypto:(id)arg2;

@end

