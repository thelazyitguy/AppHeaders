//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaRequest.h"

@class NSString;

@interface PisaAddToCartRequest : PisaRequest
{
    NSString *_asin;
    unsigned long long _quantity;
    NSString *_accessToken;
}

@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) NSString *asin; // @synthesize asin=_asin;
- (void).cxx_destruct;
- (id)requestString;
- (id)initWithASIN:(id)arg1 quantity:(unsigned long long)arg2 accessToken:(id)arg3;
- (Class)responseClass;

@end
