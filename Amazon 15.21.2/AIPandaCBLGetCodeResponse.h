//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIPandaResponse.h"

@class NSString;

@interface AIPandaCBLGetCodeResponse : AIPandaResponse
{
    NSString *_publicCode;
    NSString *_privateCode;
    NSString *_expiration;
    NSString *_pollingInterval;
}

@property(retain) NSString *pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(retain) NSString *expiration; // @synthesize expiration=_expiration;
@property(retain) NSString *privateCode; // @synthesize privateCode=_privateCode;
@property(retain) NSString *publicCode; // @synthesize publicCode=_publicCode;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 requestId:(id)arg2;

@end
