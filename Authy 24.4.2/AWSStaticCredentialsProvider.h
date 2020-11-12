//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSCredentialsProvider-Protocol.h>

@class NSDate, NSString;

@interface AWSStaticCredentialsProvider : NSObject <AWSCredentialsProvider>
{
    NSString *_accessKey;
    NSString *_secretKey;
}

+ (id)credentialsWithCredentialsFilename:(id)arg1;
+ (id)credentialsWithAccessKey:(id)arg1 secretKey:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(readonly, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
- (id)initWithCredentialsFilename:(id)arg1;
- (id)initWithAccessKey:(id)arg1 secretKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expiration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *sessionKey;
@property(readonly) Class superclass;

@end
