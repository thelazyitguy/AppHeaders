//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAAPIResponseMapping-Protocol.h>

@class NSString;

@interface SMAAPIResponseMapper : NSObject <SMAAPIResponseMapping>
{
}

- (id)skAdNetworkFromHeaders:(id)arg1;
- (double)adTTLFromNumber:(id)arg1 withDate:(id)arg2 adFormat:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)adFormatFromAdFromatHeader:(id)arg1 csmHeader:(id)arg2;
- (id)APIAdResponseWithData:(id)arg1 httpHeaders:(id)arg2 error:(id *)arg3;
- (id)APIAdResponseFromHTTPResponse:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
