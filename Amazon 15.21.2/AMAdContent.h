//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMAdContent : NSObject
{
    int _creativeType;
    int _aaxErrorCode;
    int _errorType;
    long long _noretryTTL;
    long long _cacheTTL;
    NSString *_pixelURL;
    NSString *_impressionPixelURL;
    NSString *_creativeContent;
    NSString *_requestId;
    NSString *_errorDescription;
    struct CGSize _creativeSize;
}

@property(nonatomic) struct CGSize creativeSize; // @synthesize creativeSize=_creativeSize;
@property(nonatomic) int errorType; // @synthesize errorType=_errorType;
@property(nonatomic) int aaxErrorCode; // @synthesize aaxErrorCode=_aaxErrorCode;
@property(nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *creativeContent; // @synthesize creativeContent=_creativeContent;
@property(copy, nonatomic) NSString *impressionPixelURL; // @synthesize impressionPixelURL=_impressionPixelURL;
@property(copy, nonatomic) NSString *pixelURL; // @synthesize pixelURL=_pixelURL;
@property(nonatomic) long long cacheTTL; // @synthesize cacheTTL=_cacheTTL;
@property(nonatomic) long long noretryTTL; // @synthesize noretryTTL=_noretryTTL;
- (void).cxx_destruct;
- (int)lookupAdErrorType:(int)arg1;
- (void)processAd:(id)arg1;
- (_Bool)processErrors:(id)arg1;
- (id)adPayload:(id)arg1;
- (_Bool)javascriptSourceTagIncluded:(id)arg1 inHTML:(id)arg2;
- (int)identifyAdCreativeTypeFromCreativeTypes:(id)arg1 size:(id)arg2 html:(id)arg3;
- (void)decodeResponse:(id)arg1;
- (void)decodeResponseData:(id)arg1;
- (_Bool)validAdContent;
- (id)bridgesEnabled;
- (id)initWithWebResponse:(id)arg1;
- (id)initWithResponseData:(id)arg1;
- (id)init;

@end
